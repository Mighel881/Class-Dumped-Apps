//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DBCommentsObserver-Protocol.h"

@class DBCommentsAnnotationButtonHelper, DBObserverHandle, NSMapTable, NSNumber, NSString, UIButton;
@protocol DBCommentsBottomBarWithActionsViewHelper, DBCommentsTextInputAccessoryViewAware, DBFileViewerInteractionManagerProtocol, DBModalManaging, DBToolbarActionRegistryProtocol;

@interface DBCommentsBottomBarWithActionsView : UIView <DBCommentsObserver>
{
    DBObserverHandle *_commentStatusObserver;
    id <DBCommentsBottomBarWithActionsViewHelper> _helper;
    UIButton *_commentsActionButton;
    UIButton *_activityActionButton;
    UIButton *_editActionButton;
    NSNumber *_commentsCount;
    _Bool _viewsSetup;
    _Bool _commentsLocked;
    _Bool _annotationCommentsAllowed;
    _Bool _didReceiveCommentsInfo;
    UIView *_commentsTextInputViewContainer;
    UIView *_commentsInfoTextView;
    UIButton *_commentsTextInputViewWrapper;
    UIView<DBCommentsTextInputAccessoryViewAware> *_commentsTextInputView;
    DBCommentsAnnotationButtonHelper *_annotationButtonHelper;
    id <DBFileViewerInteractionManagerProtocol> _interactionManager;
    id <DBModalManaging> _modalManager;
    CDUnknownBlockType _actionBlock;
    id <DBToolbarActionRegistryProtocol> _actionRegistry;
    NSMapTable *_handlerMap;
    NSString *_testInfoText;
}

+ (id)db_activityButtonString;
+ (id)db_commentsDisabledInfoString;
+ (id)db_commentsButtonStringWithCommentsCount:(unsigned long long)arg1;
+ (id)db_commentsButtonString;
+ (id)db_infoTextViewWithText:(id)arg1 color:(id)arg2 link:(id)arg3 modalManager:(id)arg4;
- (void).cxx_destruct;
- (_Bool)test_annotationButtonEnabled;
- (_Bool)test_showingInputView;
- (id)test_displayedInfoText;
- (void)didUpdateCommentsStateWithObservable:(id)arg1 count:(unsigned long long)arg2 subscribed:(_Bool)arg3 locked:(_Bool)arg4 annotationCommentsAllowed:(_Bool)arg5;
- (id)db_editButtonString;
- (void)db_performEditActionWithSender:(id)arg1;
- (void)db_performActivityActionWithSender:(id)arg1;
- (void)db_performCommentsActionWithSender:(id)arg1;
- (void)db_didTapCommentsBarView:(id)arg1;
- (void)db_updateEditButton;
- (void)db_updateCommentsTextInputOrInfoView;
- (void)db_updateCommentsActionButton;
- (_Bool)db_isCloudDocOutsideFilesystem;
- (_Bool)db_commentsDisabled;
- (void)db_requestCommentsStatus;
- (void)db_didTapButton:(id)arg1;
- (id)db_actionButtonWithImage:(id)arg1 title:(id)arg2 actionId:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)db_setupViews;
- (void)configureWithHelper:(id)arg1 interactionManager:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithActionRegistry:(id)arg1 modalManager:(id)arg2;

@end
