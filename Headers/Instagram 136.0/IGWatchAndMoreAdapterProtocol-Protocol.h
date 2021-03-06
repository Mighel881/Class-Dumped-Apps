//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSURL, UIView;
@protocol IGWatchAndMoreAdapterDelegate;

@protocol IGWatchAndMoreAdapterProtocol <NSObject>
@property(readonly, nonatomic) _Bool shouldFixContentViewPosition;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, copy, nonatomic) NSURL *url;
@property(readonly, nonatomic) UIView *contentView;
@property(nonatomic) __weak id <IGWatchAndMoreAdapterDelegate> delegate;
- (void)dismiss;
- (void)showNavigationBarButtons:(_Bool)arg1;
- (void)watchAndMoreDidFullscreen;
@end

