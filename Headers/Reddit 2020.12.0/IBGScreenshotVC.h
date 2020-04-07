//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGViewController.h>

#import <Instabug/IBGAnnotatorDelegate-Protocol.h>
#import <Instabug/IBGColorSelectorViewDelegate-Protocol.h>
#import <Instabug/IBGDrawingToolbarViewDelegate-Protocol.h>
#import <Instabug/IBGScreenshotAnnotationsViewDelegate-Protocol.h>
#import <Instabug/IBGShapeDetectionOverlayProtocol-Protocol.h>

@class IBGAnnotator, IBGColorSelectorView, IBGDrawingToolbarView, IBGFreeDrawingAnnotationView, IBGScreenshotAnnotationsView, IBGShapeDetectionOverlay, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIColor, UIImage, UIImageView, UITapGestureRecognizer, UIView;
@protocol IBGScreenshotViewDelegate;

@interface IBGScreenshotVC : IBGViewController <IBGDrawingToolbarViewDelegate, IBGColorSelectorViewDelegate, IBGScreenshotAnnotationsViewDelegate, IBGShapeDetectionOverlayProtocol, IBGAnnotatorDelegate>
{
    _Bool _isFromGallery;
    _Bool _didMove;
    _Bool _showButtons;
    IBGFreeDrawingAnnotationView *currentAnnotationView;
    IBGScreenshotAnnotationsView *screenshotAnnotationsView;
    long long _currentAnnotationViewType;
    NSMutableArray *_touchPoints;
    UIColor *selectedColor;
    long long _reportType;
    UIImageView *_screenshotBackground;
    IBGDrawingToolbarView *_drawingToolbarView;
    IBGColorSelectorView *_colorSelectorView;
    UIView *_drawingView;
    UIView *_bottomDrawingView;
    id <IBGScreenshotViewDelegate> _delegate;
    long long _rightNavigationButtonType;
    UIImage *_screenshot;
    unsigned long long _selectedColorIndex;
    NSString *_screenshotTitle;
    UIView *_contentView;
    NSLayoutConstraint *_colorSelectorBottomConstraint;
    NSLayoutConstraint *_drawingToolbarTopConstraint;
    UIView *_screenshotBackgroundView;
    NSArray *_linesToThemeWithLineColor;
    NSLayoutConstraint *_drawingAreaWidthConstraint;
    NSLayoutConstraint *_drawingAreaHeightConstraint;
    NSLayoutConstraint *_lineSepratorHeightConstraint;
    UITapGestureRecognizer *_tapGesture;
    IBGShapeDetectionOverlay *_shapeDetectionOverlay;
    IBGAnnotator *_annotator;
}

+ (double)getHeaderViewHeightPortrait;
+ (double)getHeaderViewHeightLandscape;
@property(retain, nonatomic) IBGAnnotator *annotator; // @synthesize annotator=_annotator;
@property(retain, nonatomic) IBGShapeDetectionOverlay *shapeDetectionOverlay; // @synthesize shapeDetectionOverlay=_shapeDetectionOverlay;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak NSLayoutConstraint *lineSepratorHeightConstraint; // @synthesize lineSepratorHeightConstraint=_lineSepratorHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *drawingAreaHeightConstraint; // @synthesize drawingAreaHeightConstraint=_drawingAreaHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *drawingAreaWidthConstraint; // @synthesize drawingAreaWidthConstraint=_drawingAreaWidthConstraint;
@property(retain, nonatomic) NSArray *linesToThemeWithLineColor; // @synthesize linesToThemeWithLineColor=_linesToThemeWithLineColor;
@property(nonatomic) __weak UIView *screenshotBackgroundView; // @synthesize screenshotBackgroundView=_screenshotBackgroundView;
@property(nonatomic) __weak NSLayoutConstraint *drawingToolbarTopConstraint; // @synthesize drawingToolbarTopConstraint=_drawingToolbarTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *colorSelectorBottomConstraint; // @synthesize colorSelectorBottomConstraint=_colorSelectorBottomConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *screenshotTitle; // @synthesize screenshotTitle=_screenshotTitle;
@property(nonatomic) unsigned long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property(retain, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;
@property(nonatomic) long long rightNavigationButtonType; // @synthesize rightNavigationButtonType=_rightNavigationButtonType;
@property(nonatomic) _Bool showButtons; // @synthesize showButtons=_showButtons;
@property(nonatomic) _Bool didMove; // @synthesize didMove=_didMove;
@property(nonatomic) __weak id <IBGScreenshotViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFromGallery; // @synthesize isFromGallery=_isFromGallery;
@property(nonatomic) __weak UIView *bottomDrawingView; // @synthesize bottomDrawingView=_bottomDrawingView;
@property(nonatomic) __weak UIView *drawingView; // @synthesize drawingView=_drawingView;
@property(retain, nonatomic) IBGColorSelectorView *colorSelectorView; // @synthesize colorSelectorView=_colorSelectorView;
@property(retain, nonatomic) IBGDrawingToolbarView *drawingToolbarView; // @synthesize drawingToolbarView=_drawingToolbarView;
@property(retain, nonatomic) UIImageView *screenshotBackground; // @synthesize screenshotBackground=_screenshotBackground;
@property(readonly, nonatomic) long long reportType; // @synthesize reportType=_reportType;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor;
@property(retain, nonatomic) NSMutableArray *touchPoints; // @synthesize touchPoints=_touchPoints;
@property(nonatomic) long long currentAnnotationViewType; // @synthesize currentAnnotationViewType=_currentAnnotationViewType;
@property(retain, nonatomic) IBGScreenshotAnnotationsView *screenshotAnnotationsView; // @synthesize screenshotAnnotationsView;
@property(retain, nonatomic) IBGFreeDrawingAnnotationView *currentAnnotationView; // @synthesize currentAnnotationView;
- (void).cxx_destruct;
- (void)setupColorSelectorViewConstraints;
- (id)annotationsView;
- (void)screenshotAnnotationsViewDidChangeFrame:(struct CGRect)arg1;
- (void)screenshotAnnotationsViewWillChangeFrame:(struct CGRect)arg1;
- (void)didSelectColorAtIndex:(unsigned long long)arg1;
- (void)undoButtonPressed:(id)arg1;
- (void)freeDrawingPressed:(id)arg1;
- (void)magnifyButtonPressed:(id)arg1;
- (void)blurButtonPressed:(id)arg1;
- (double)minScreenWidth;
- (void)removeAnotationViewSelection;
- (id)annotatedScreenshot;
- (_Bool)isScreenshotLandscape;
- (double)screenshotRatio;
- (struct CGSize)newImageSize;
- (void)adjustDrawingAreaConstraints;
- (id)colorForIndex:(long long)arg1;
- (id)colorNameForIndex:(long long)arg1;
- (void)removeCurrentAnnotationView;
- (void)applyTheme;
- (void)removeShapeDetectionOverlay;
- (void)didSelectDetectedShape:(_Bool)arg1;
- (void)unselectAllAnnotationViews;
- (void)didEndAnnotating;
- (void)didStartAnnotating;
- (void)didDetectImage:(id)arg1 withOriginalImage:(id)arg2;
- (void)assignShapeDetectionConstranit:(id)arg1;
- (id)adjustImagesStrokeColor:(id)arg1;
- (void)showOverlayWithOriginalImage:(id)arg1 detectedImage:(id)arg2;
- (void)startShapeDetection;
- (void)handleTapGesture;
- (void)cancelButtonPressed:(id)arg1;
- (void)nextButtonTapped:(id)arg1;
- (void)dismissColorSelectorView;
- (void)presentColorSelectorView;
- (void)toggleColorSelectorView;
- (_Bool)isColorSelectorPresented;
- (void)adjustScreenshotAnnotationsImage;
- (id)generateColors;
- (_Bool)shouldFlipImageForRTLLayoutDirection:(long long)arg1;
- (void)dealloc;
- (void)unreigsterNotification;
- (void)registerNotification;
- (id)imageNameFromNavigationButtonType:(long long)arg1;
- (void)addNaviagtionBarButtons;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTitle:(id)arg1 screenshot:(id)arg2 reportType:(long long)arg3 delegate:(id)arg4 rightNavigationButtonType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
