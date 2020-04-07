//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAttachmentLabel.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface AWEBillboardLabel : AWEAttachmentLabel
{
    _Bool _isOriginal;
    unsigned long long _attachmentAlignment;
    CDUnknownBlockType _attachmentAction;
    long long _rank;
    NSString *_rankTitle;
    double _originalImageWidth;
    UIImageView *_originalImageView;
    UIButton *_billboardButton;
    UILabel *_rankNumberLabel;
    UILabel *_rankTitleLabel;
}

@property(retain, nonatomic) UILabel *rankTitleLabel; // @synthesize rankTitleLabel=_rankTitleLabel;
@property(retain, nonatomic) UILabel *rankNumberLabel; // @synthesize rankNumberLabel=_rankNumberLabel;
@property(retain, nonatomic) UIButton *billboardButton; // @synthesize billboardButton=_billboardButton;
@property(retain, nonatomic) UIImageView *originalImageView; // @synthesize originalImageView=_originalImageView;
@property(nonatomic) double originalImageWidth; // @synthesize originalImageWidth=_originalImageWidth;
@property(nonatomic) _Bool isOriginal; // @synthesize isOriginal=_isOriginal;
@property(copy, nonatomic) NSString *rankTitle; // @synthesize rankTitle=_rankTitle;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(copy, nonatomic) CDUnknownBlockType attachmentAction; // @synthesize attachmentAction=_attachmentAction;
@property(nonatomic) unsigned long long attachmentAlignment; // @synthesize attachmentAlignment=_attachmentAlignment;
- (void).cxx_destruct;
- (struct CGRect)rankTitleRect;
- (void)onBillboardButtonClicked:(id)arg1;
- (long long)p_billboardAttachmentContentMode;
- (long long)p_YYTextVerticalAlignment;
- (void)setRank:(long long)arg1 rankTitle:(id)arg2 attachmentAction:(CDUnknownBlockType)arg3;
- (void)p_setupBillboardButton;
- (void)p_generateBillboardButtonAttachment;
- (void)p_generateOriginalImageViewAttachment;
- (void)resetRankAttachment;
- (void)updateLayout;
- (id)init;

@end
