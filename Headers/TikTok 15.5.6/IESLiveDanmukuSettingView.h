//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveDanmukuSettingViewProtocol-Protocol.h"

@class HTSLiveCustomSlider, HTSLiveGameDanmukuSettingPositionView, NSString, UILabel, UISwitch;
@protocol IESLiveRoomService, IESLiveSettings, IESLiveToastFactory;

@interface IESLiveDanmukuSettingView : UIView <IESLiveDanmukuSettingViewProtocol>
{
    _Bool _enableNormalDanmukuValue;
    double _alphaValue;
    double _fontSizeValue;
    unsigned long long _positionValue;
    CDUnknownBlockType _enableNormalDanmukuChanged;
    CDUnknownBlockType _fontSizeChanged;
    CDUnknownBlockType _alphaChanged;
    CDUnknownBlockType _positionChanged;
    UILabel *_danmakuLabel;
    UISwitch *_danmukuSwitch;
    HTSLiveCustomSlider *_alphaSlider;
    HTSLiveCustomSlider *_sizeSlider;
    HTSLiveGameDanmukuSettingPositionView *_upPositionView;
    HTSLiveGameDanmukuSettingPositionView *_downPositionView;
    HTSLiveGameDanmukuSettingPositionView *_fullPositionView;
    UILabel *_alphaLabel;
    UILabel *_sizeLabel;
    UILabel *_positionLabel;
    double _alphaLabelWidth;
    double _sizeLabelWidth;
    double _positionLabelWidth;
    double _maxLabelWidth;
    id <IESLiveSettings> _settings;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveRoomService> _liveRoomService;
}

@property(retain, nonatomic) id <IESLiveRoomService> liveRoomService; // @synthesize liveRoomService=_liveRoomService;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) double maxLabelWidth; // @synthesize maxLabelWidth=_maxLabelWidth;
@property(nonatomic) double positionLabelWidth; // @synthesize positionLabelWidth=_positionLabelWidth;
@property(nonatomic) double sizeLabelWidth; // @synthesize sizeLabelWidth=_sizeLabelWidth;
@property(nonatomic) double alphaLabelWidth; // @synthesize alphaLabelWidth=_alphaLabelWidth;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *alphaLabel; // @synthesize alphaLabel=_alphaLabel;
@property(retain, nonatomic) HTSLiveGameDanmukuSettingPositionView *fullPositionView; // @synthesize fullPositionView=_fullPositionView;
@property(retain, nonatomic) HTSLiveGameDanmukuSettingPositionView *downPositionView; // @synthesize downPositionView=_downPositionView;
@property(retain, nonatomic) HTSLiveGameDanmukuSettingPositionView *upPositionView; // @synthesize upPositionView=_upPositionView;
@property(retain, nonatomic) HTSLiveCustomSlider *sizeSlider; // @synthesize sizeSlider=_sizeSlider;
@property(retain, nonatomic) HTSLiveCustomSlider *alphaSlider; // @synthesize alphaSlider=_alphaSlider;
@property(retain, nonatomic) UISwitch *danmukuSwitch; // @synthesize danmukuSwitch=_danmukuSwitch;
@property(retain, nonatomic) UILabel *danmakuLabel; // @synthesize danmakuLabel=_danmakuLabel;
@property(copy, nonatomic) CDUnknownBlockType positionChanged; // @synthesize positionChanged=_positionChanged;
@property(copy, nonatomic) CDUnknownBlockType alphaChanged; // @synthesize alphaChanged=_alphaChanged;
@property(copy, nonatomic) CDUnknownBlockType fontSizeChanged; // @synthesize fontSizeChanged=_fontSizeChanged;
@property(copy, nonatomic) CDUnknownBlockType enableNormalDanmukuChanged; // @synthesize enableNormalDanmukuChanged=_enableNormalDanmukuChanged;
@property(nonatomic) unsigned long long positionValue; // @synthesize positionValue=_positionValue;
@property(nonatomic) _Bool enableNormalDanmukuValue; // @synthesize enableNormalDanmukuValue=_enableNormalDanmukuValue;
@property(nonatomic) double fontSizeValue; // @synthesize fontSizeValue=_fontSizeValue;
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
- (void).cxx_destruct;
- (void)_danmukuSwitchChanged;
- (void)viewEnableMode:(_Bool)arg1;
- (void)setSettingEnable:(_Bool)arg1;
- (_Bool)enableDanmuChatAppear;
- (void)layoutSubviews;
- (double)_getTrailingMargin;
- (void)_setJustifiedAttributeStringForLabel:(id)arg1 text:(id)arg2 originalWidth:(double)arg3 realWidth:(double)arg4;
- (void)_showDanmukuSettingsToast;
- (id)_generateSliderConfig;
- (id)_generateConfigWithType:(long long)arg1;
- (void)_createUIComponents;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
