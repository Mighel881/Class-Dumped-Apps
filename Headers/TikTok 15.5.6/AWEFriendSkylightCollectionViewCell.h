//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEStoryEntranceLoadingDataSource-Protocol.h"

@class AWEURLModel, NSString, UIImageView, UILabel;

@interface AWEFriendSkylightCollectionViewCell : UICollectionViewCell <AWEStoryEntranceLoadingDataSource>
{
    AWEURLModel *_avatarURLModel;
    NSString *_userName;
    NSString *_userID;
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
}

@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) AWEURLModel *avatarURLModel; // @synthesize avatarURLModel=_avatarURLModel;
- (void).cxx_destruct;
- (id)storyEntranceLoadingHostView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
