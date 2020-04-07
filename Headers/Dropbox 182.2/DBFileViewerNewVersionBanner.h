//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DBUserAvatarFetcher, DBUserAvatarView, NSArray, UIButton, UILabel;

@interface DBFileViewerNewVersionBanner : UIView
{
    _Bool _animating;
    CDUnknownBlockType _onRefresh;
    UIView *_contentView;
    DBUserAvatarView *_avatarView;
    UILabel *_titleLabel;
    UIButton *_refreshButton;
    DBUserAvatarFetcher *_fetcher;
    NSArray *_horizontalConstraints;
}

@property(retain, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(retain, nonatomic) DBUserAvatarFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DBUserAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onRefresh; // @synthesize onRefresh=_onRefresh;
- (void).cxx_destruct;
- (void)callRefreshBlock;
- (void)configureWithDisplayName:(id)arg1 isSelf:(_Bool)arg2 eventType:(unsigned long long)arg3 userAvatarFetcher:(id)arg4;
- (void)invalidateAndUpdateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
