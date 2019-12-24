//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWESearchTopUserContentCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface AWESearchStarAlladinMusicCell : UICollectionViewCell <AWESearchTopUserContentCellProtocol>
{
    UIImageView *_musicCoverImageView;
    UIImageView *_playIconImageView;
    UILabel *_musicNameLabel;
    UILabel *_musicInfoLabel;
    long long _index;
    CDUnknownBlockType _clickContentViewBlock;
    CDUnknownBlockType _clickMusicCoverBlock;
}

+ (Class)getClass;
+ (struct CGSize)cellSize;
+ (id)cellIdentifier;
@property(copy, nonatomic) CDUnknownBlockType clickMusicCoverBlock; // @synthesize clickMusicCoverBlock=_clickMusicCoverBlock;
@property(copy, nonatomic) CDUnknownBlockType clickContentViewBlock; // @synthesize clickContentViewBlock=_clickContentViewBlock;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UILabel *musicInfoLabel; // @synthesize musicInfoLabel=_musicInfoLabel;
@property(retain, nonatomic) UILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(retain, nonatomic) UIImageView *musicCoverImageView; // @synthesize musicCoverImageView=_musicCoverImageView;
- (void).cxx_destruct;
- (void)onContentViewTapped;
- (void)onMusicCoverTapped;
- (void)configUI;
- (id)timeString:(double)arg1;
- (void)p_stopAnimation;
- (void)p_startAnimation;
- (void)configWithPlayerStatus:(unsigned long long)arg1;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
