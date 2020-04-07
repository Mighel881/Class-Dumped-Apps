//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBBlockActionObject, NSMutableArray, NSString;
@protocol DBBlockActionSheet, DBBlockActionSheetFactory;

@interface DBBlockActionSheetManager : NSObject
{
    NSString *_title;
    NSString *_message;
    DBBlockActionObject *_cancelAction;
    DBBlockActionObject *_destructiveAction;
    NSMutableArray *_otherActions;
    id <DBBlockActionSheetFactory> _actionSheetFactory;
    id <DBBlockActionSheet> _actionSheet;
    DBBlockActionSheetManager *_selfRetain;
    unsigned long long _permittedArrowDirections;
}

@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
- (void).cxx_destruct;
- (id)test_prepareToShow;
- (void)db_didDismissActionSheet;
- (id)db_createActionSheet;
- (_Bool)isVisible;
- (void)dismissWithClickedCancelButtonAnimated:(_Bool)arg1;
- (void)showFromTabBar:(id)arg1;
- (void)showFromBarButtonItem:(id)arg1;
- (void)showInView:(id)arg1;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)db_addOtherAction:(id)arg1;
- (void)addButtonWithTitle:(id)arg1 accessibilityLabel:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addDestructiveButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addCancelButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actionSheetFactory:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actionSheetAndAlertPresenter:(id)arg3;
- (id)initWithTitle:(id)arg1 actionSheetAndAlertPresenter:(id)arg2;

@end
