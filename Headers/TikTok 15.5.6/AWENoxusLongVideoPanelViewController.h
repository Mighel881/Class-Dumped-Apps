//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWENoxusLongVideoPanelListViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWENoxusLongVideoDetailResponseModel, AWENoxusLongVideoPanelListView, CAShapeLayer, MASConstraint, NSDictionary, NSString, UIButton, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol AWENoxusLongVideoPanelViewDelegate;

@interface AWENoxusLongVideoPanelViewController : UIViewController <UIGestureRecognizerDelegate, AWENoxusLongVideoPanelListViewDelegate>
{
    AWENoxusLongVideoPanelListView *_listView;
    id <AWENoxusLongVideoPanelViewDelegate> _delegate;
    long long _rotateMode;
    AWENoxusLongVideoDetailResponseModel *_model;
    NSDictionary *_params;
    UIView *_containerView;
    UIView *_effectView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    CAShapeLayer *_maskLayer;
    UIPanGestureRecognizer *_panGes;
    UITapGestureRecognizer *_tapGes;
    double _baseViewBottomOffset;
    double _KMixListHeight;
    MASConstraint *_baseViewBottom;
    struct CGPoint _lastLocation;
}

@property(retain, nonatomic) MASConstraint *baseViewBottom; // @synthesize baseViewBottom=_baseViewBottom;
@property(nonatomic) double KMixListHeight; // @synthesize KMixListHeight=_KMixListHeight;
@property(nonatomic) double baseViewBottomOffset; // @synthesize baseViewBottomOffset=_baseViewBottomOffset;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) UITapGestureRecognizer *tapGes; // @synthesize tapGes=_tapGes;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) AWENoxusLongVideoDetailResponseModel *model; // @synthesize model=_model;
@property(nonatomic) long long rotateMode; // @synthesize rotateMode=_rotateMode;
@property(nonatomic) __weak id <AWENoxusLongVideoPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWENoxusLongVideoPanelListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)episodePanelListDidSelectAtIndex:(long long)arg1 indexModel:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)selfPanned:(id)arg1;
- (void)selfTapped:(id)arg1;
- (void)closeButtonTapped;
- (void)updateInfo:(id)arg1 params:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
