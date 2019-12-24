//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPhoneConfirmationController.h"

@class NSString;
@protocol WADeleteAccountPhoneConfirmationViewControllerDelegate;

@interface WADeleteAccountPhoneConfirmationViewController : WAPhoneConfirmationController
{
    NSString *_thirdAction;
    _Bool _warnAboutPayments;
}

- (void).cxx_destruct;
- (id)buttonTitle;
- (id)warningBulletPoints;
- (id)warningText;
- (id)title;
- (void)setUpTableView;
- (id)initWithDelegate:(id)arg1 shouldWarnAboutBackupDeletion:(_Bool)arg2 shouldWarnAboutPayments:(_Bool)arg3;

// Remaining properties
@property(nonatomic) __weak id <WADeleteAccountPhoneConfirmationViewControllerDelegate> delegate; // @dynamic delegate;

@end
