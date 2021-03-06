//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCustomLayoutViewController.h"

#import "SKTShareSheetDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol HMEPeoplePickerSetupViewControllerDelegate, SKTShareSheet;

@interface HMEPeoplePickerSetupViewController : HMESetupCustomLayoutViewController <SKTShareSheetDelegate>
{
    id <HMEPeoplePickerSetupViewControllerDelegate> _delegate;
    UIViewController<SKTShareSheet> *_sendKitChildViewController;
}

+ (id)searchBarPlaceholderText;
+ (id)headerViewTitleText;
@property(readonly, nonatomic) UIViewController<SKTShareSheet> *sendKitChildViewController; // @synthesize sendKitChildViewController=_sendKitChildViewController;
@property(nonatomic) __weak id <HMEPeoplePickerSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareSheet:(id)arg1 didSelectTarget:(id)arg2;
- (void)clearSelectedContact;
- (void)viewDidLoad;
- (id)initWithSendKitUIService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

