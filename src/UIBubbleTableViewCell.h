//
//  UIBubbleTableViewCell.h
//
//  Created by Alex Barinov
//  StexGroup, LLC
//  http://www.stexgroup.com
//
//  Project home page: http://alexbarinov.github.com/UIBubbleTableView/
//
//  This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
//


#import <UIKit/UIKit.h>
#import "NSBubbleDataInternal.h"
#import "TTTAttributedLabel.h"
 
@interface UIBubbleTableViewCell : UITableViewCell <TTTAttributedLabelDelegate>
{
    IBOutlet UILabel *headerLabel;
    IBOutlet TTTAttributedLabel *contentLabel;
    IBOutlet UIImageView *bubbleImage;
}

@property (nonatomic, strong) NSBubbleDataInternal *dataInternal;

@end
