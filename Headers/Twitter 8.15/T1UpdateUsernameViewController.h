//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UsernameViewController.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString;

@interface T1UpdateUsernameViewController : T1UsernameViewController <TFNAttributedTextViewDelegate>
{
}

- (void)abandonForm;
- (void)submitForm;
- (void)_t1_handleSaveError:(id)arg1;
- (void)_t1_save;
- (id)initWithAccount:(id)arg1 title:(id)arg2 subtitle:(id)arg3 nextLinkLabel:(id)arg4 skipLinkLabel:(id)arg5 detailText:(id)arg6 activeRanges:(id)arg7 options:(long long)arg8 scribeContext:(id)arg9;
- (id)initWithAccount:(id)arg1 submitButtonTitle:(id)arg2 options:(long long)arg3 scribeContext:(id)arg4;
- (id)initWithAccount:(id)arg1 options:(long long)arg2 scribeContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
