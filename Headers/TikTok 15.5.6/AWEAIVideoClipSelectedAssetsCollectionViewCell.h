//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEAssetModel, UIButton, UIImageView, UILabel;

@interface AWEAIVideoClipSelectedAssetsCollectionViewCell : UICollectionViewCell
{
    AWEAssetModel *_assetModel;
    UIImageView *_imageView;
    UILabel *_videoDurationLabel;
    UIButton *_deleteButton;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AWEAssetModel *assetModel; // @synthesize assetModel=_assetModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
