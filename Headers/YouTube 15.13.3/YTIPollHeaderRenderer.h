//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIPollHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *contextMenuButton; // @dynamic contextMenuButton;
@property(nonatomic) _Bool hasContextMenuButton; // @dynamic hasContextMenuButton;
@property(nonatomic) _Bool hasMetadataText; // @dynamic hasMetadataText;
@property(nonatomic) _Bool hasPollQuestion; // @dynamic hasPollQuestion;
@property(nonatomic) _Bool hasSubMetadataText; // @dynamic hasSubMetadataText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(retain, nonatomic) YTIFormattedString *metadataText; // @dynamic metadataText;
@property(retain, nonatomic) YTIFormattedString *pollQuestion; // @dynamic pollQuestion;
@property(retain, nonatomic) YTIFormattedString *subMetadataText; // @dynamic subMetadataText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;

@end
