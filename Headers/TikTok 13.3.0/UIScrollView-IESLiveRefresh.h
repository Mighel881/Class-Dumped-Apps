//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;
@protocol IESLiveRefreshDelegate;

@interface UIScrollView (IESLiveRefresh)
- (unsigned long long)refreshType;
- (void)setRefreshType:(unsigned long long)arg1;
- (unsigned long long)footerRefreshState;
- (void)setFooterRefreshState:(unsigned long long)arg1;
- (unsigned long long)headerRefreshState;
- (void)setHeaderRefreshState:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *ieslive_refreshFooter;
- (void)setIeslive_refreshFooter:(id)arg1;
@property(readonly, nonatomic) UIView *ieslive_refreshHeader;
- (void)setIeslive_refreshHeader:(id)arg1;
@property(readonly, nonatomic, getter=isFooterRefreshing) _Bool footerRefreshing;
@property(readonly, nonatomic, getter=isHeaderRefreshing) _Bool headerRefreshing;
@property(readonly, nonatomic) __weak id <IESLiveRefreshDelegate> refreshDelegate;
- (void)setIes_refreshObserver:(id)arg1;
- (id)ies_refreshObserver;
- (void)ieslive_removeRefreshObserver;
- (id)defaultRefreshViewWithRefreshState:(unsigned long long)arg1 refreshType:(unsigned long long)arg2;
- (void)didClickRefreshFooter:(id)arg1;
- (void)ieslive_commitRefreshState:(unsigned long long)arg1 refreshType:(unsigned long long)arg2;
- (void)ieslive_commitRefreshObserver;
- (void)ieslive_realEndHeaderRefreh;
- (void)ieslive_initialRereshWithRefreshType:(unsigned long long)arg1;
- (void)ieslive_endFooterRefreshWithNoMore:(_Bool)arg1;
- (void)ieslive_endHeaderRefresh;
- (void)ieslive_beginRefreshWithRefreshType:(unsigned long long)arg1;
- (void)ieslive_unregisterRefresh;
- (void)ieslive_registerRefreshDelegate:(id)arg1 refreshType:(unsigned long long)arg2;
- (void)ieslive_registerRefreshDelegate:(id)arg1;
@end
