//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ProfileActionButtonProvider-Protocol.h>

@class NSString, TFNTwitterAccount, UIView;
@protocol T1ProfileActionButtonProviderDelegate, T1ProfileDataSource;

@interface T1ProfileActionDataSourceButtonProvider : NSObject <T1ProfileActionButtonProvider>
{
    id <T1ProfileDataSource> _dataSource;
    id <T1ProfileActionButtonProviderDelegate> _delegate;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1ProfileActionButtonProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <T1ProfileDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_profileDataSourceDidInvalidate:(id)arg1;
@property(nonatomic) _Bool showsNewContentIndicator;
@property(readonly, nonatomic) UIView *buttonView;
@property(readonly, nonatomic) unsigned long long buttonState;
- (void)dataSourceDidInvalidateForReason:(long long)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

