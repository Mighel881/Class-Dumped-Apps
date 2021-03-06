//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveRichTextBuilder, UIImageView, UILabel;
@protocol IESLiveWebImageService;

@interface IESLiveDouyinChargeBannerView : UIView
{
    double _maxWidth;
    CDUnknownBlockType _tapBlock;
    long long _style;
    IESLiveRichTextBuilder *_richTextBuilder;
    UILabel *_contentLabel;
    UIImageView *_backgroundImageView;
    id <IESLiveWebImageService> _webImageService;
}

@property(retain, nonatomic) id <IESLiveWebImageService> webImageService; // @synthesize webImageService=_webImageService;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) IESLiveRichTextBuilder *richTextBuilder; // @synthesize richTextBuilder=_richTextBuilder;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (void)updateWithRichTextModels:(id)arg1 backgroundImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tapAction;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1;

@end

