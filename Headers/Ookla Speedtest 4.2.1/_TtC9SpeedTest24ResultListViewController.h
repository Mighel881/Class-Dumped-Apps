//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UILabel, UIView, _TtC5Gauge17RenderedImageView;

@interface _TtC9SpeedTest24ResultListViewController : UIViewController
{
    // Error parsing type: , name: typeLabel
    // Error parsing type: , name: dateLabel
    // Error parsing type: , name: downloadContainer
    // Error parsing type: , name: downloadImage
    // Error parsing type: , name: downloadLabel
    // Error parsing type: , name: uploadContainer
    // Error parsing type: , name: uploadLabel
    // Error parsing type: , name: uploadImage
    // Error parsing type: , name: trailingConstraint
    // Error parsing type: , name: sceneController
    // Error parsing type: , name: resultsTableViewController
    // Error parsing type: , name: sortOrder
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint;
@property(nonatomic, retain) _TtC5Gauge17RenderedImageView *uploadImage; // @synthesize uploadImage;
@property(nonatomic, retain) UILabel *uploadLabel; // @synthesize uploadLabel;
@property(nonatomic, retain) UIView *uploadContainer; // @synthesize uploadContainer;
@property(nonatomic, retain) UILabel *downloadLabel; // @synthesize downloadLabel;
@property(nonatomic, retain) _TtC5Gauge17RenderedImageView *downloadImage; // @synthesize downloadImage;
@property(nonatomic, retain) UIView *downloadContainer; // @synthesize downloadContainer;
@property(nonatomic, retain) UILabel *dateLabel; // @synthesize dateLabel;
@property(nonatomic, retain) UILabel *typeLabel; // @synthesize typeLabel;

@end

