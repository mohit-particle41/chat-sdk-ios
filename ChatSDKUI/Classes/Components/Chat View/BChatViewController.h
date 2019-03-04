//
//  BChatViewController.h
//  Pods
//
//  Created by Benjamin Smiley-andrews on 02/02/2017.
//
//

#import <Foundation/Foundation.h>
#import <ChatSDK/ElmChatViewController.h>
#import <ChatSDK/ElmChatViewDelegate.h>

@protocol PThread;

@interface BChatViewController : ElmChatViewController<ElmChatViewDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate> {
    id<PThread> _thread;
    
    BOOL _usersViewLoaded;
    
    NSMutableArray * _messageCache;
    BOOL _messageCacheDirty;

}

@property (nonatomic, readonly) id<PThread> thread;
@property (nonatomic, readwrite) BOOL usersViewLoaded;
@property (nonatomic, readwrite) UIPopoverController *popover;

-(instancetype) initWithThread: (id<PThread>) thread;
- (void) updateSubtitle;
-(void) updateTitle;

@end
