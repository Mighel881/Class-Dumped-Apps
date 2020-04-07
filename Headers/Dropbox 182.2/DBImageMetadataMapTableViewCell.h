//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIImageView, UILabel;
@protocol DBImageMetadataMapCellDelegate;

@interface DBImageMetadataMapTableViewCell : UITableViewCell
{
    UIImageView *_mapView;
    UIActivityIndicatorView *_spinner;
    UILabel *_errorLabel;
    struct CGSize _lastSize;
    struct CLLocationCoordinate2D _lastCoords;
    id <DBImageMetadataMapCellDelegate> _delegate;
    struct CLLocationCoordinate2D _coords;
}

@property(nonatomic) struct CLLocationCoordinate2D coords; // @synthesize coords=_coords;
@property(nonatomic) __weak id <DBImageMetadataMapCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)db_showErrorView;
- (void)updateMapView;
@property(readonly, nonatomic) _Bool showingError;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
