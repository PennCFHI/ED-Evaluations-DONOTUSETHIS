//
//  QuestionViewController.h
//  test
//
//  Created by Nadir Bilici on 10/29/15.
//  Copyright © 2015 Nadir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Globals.h"

@interface QuestionViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *competencyName;

@property (weak, nonatomic) IBOutlet UISlider *MilestoneSlider;

@property (weak, nonatomic) IBOutlet UITextView *MilestoneDescription;

<<<<<<< HEAD
@property (strong, nonatomic) NSArray *numbers;
=======
@property (strong, nonatomic) NSArray *numbers; 
>>>>>>> master

@property (weak, nonatomic) IBOutlet UIButton *MilestoneNextButton;

@property (nonatomic) int competencyIndex;

@property (nonatomic) int numberMilestonesCompleted;

@property (nonatomic) NSMutableArray *milestoneEvaluations;

@property (weak, nonatomic) IBOutlet UITextField *writtenEvaluation;

@property (weak, nonatomic) IBOutlet UIButton *previousButton;

<<<<<<< HEAD
@property (strong, nonatomic) NSArray *compArray;

=======
>>>>>>> master
-(IBAction)changed:(id)sender;

-(int)roundSliderValue:(float)x;

@end
