//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface AWEMusCheckProfileNotificationAvatarView : UIView
{
    unsigned long long _count;
    NSArray *_avatarImageViews;
}

@property(retain, nonatomic) NSArray *avatarImageViews; // @synthesize avatarImageViews=_avatarImageViews;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setAvatarCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
