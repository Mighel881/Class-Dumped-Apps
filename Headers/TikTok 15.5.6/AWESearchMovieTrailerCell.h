//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWESearchTopUserContentCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface AWESearchMovieTrailerCell : UICollectionViewCell <AWESearchTopUserContentCellProtocol>
{
    UIImageView *_coverImageView;
    UILabel *_videoDescLabel;
    UIImageView *_diggImageView;
    UILabel *_diggInfoLabel;
    long long _index;
    CDUnknownBlockType _clickContentViewBlock;
}

+ (_Bool)enableMixVideo:(id)arg1;
+ (Class)getClass;
+ (struct CGSize)cellSize;
+ (id)cellIdentifier;
@property(copy, nonatomic) CDUnknownBlockType clickContentViewBlock; // @synthesize clickContentViewBlock=_clickContentViewBlock;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UILabel *diggInfoLabel; // @synthesize diggInfoLabel=_diggInfoLabel;
@property(retain, nonatomic) UIImageView *diggImageView; // @synthesize diggImageView=_diggImageView;
@property(retain, nonatomic) UILabel *videoDescLabel; // @synthesize videoDescLabel=_videoDescLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)onContentViewTapped;
- (void)configUI;
- (id)appendMixVideoTagIfNeededWithAweme:(id)arg1 attributedString:(id)arg2;
- (void)configWithModel:(id)arg1 showDescription:(_Bool)arg2;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
