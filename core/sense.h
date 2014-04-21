#ifndef QUADSTOR_SENSE_H_
#define QUADSTOR_SENSE_H_

#define NO_ASC						0x00
#define NO_ASCQ						0x00

#define BUS_RESET_ASC					0x29
#define BUS_RESET_ASCQ					0x00

#define COMMANDS_CLEARED_BY_ANOTHER_INITIATOR_ASC	0x2F
#define COMMANDS_CLEARED_BY_ANOTHER_INITIATOR_ASCQ	0x00

#define INVALID_FIELD_IN_CDB_ASC			0x24
#define INVALID_FIELD_IN_CDB_ASCQ			0x00

#define INVALID_FIELD_IN_PARAMETER_LIST_ASC		0x26
#define INVALID_FIELD_IN_PARAMETER_LIST_ASCQ		0x00

#define INVALID_COMMAND_OPERATION_CODE_ASC		0x20
#define INVALID_COMMAND_OPERATION_CODE_ASCQ		0x00

#define NO_ADDITIONAL_SENSE_INFORMATION_ASC		0x00
#define NO_ADDITIONAL_SENSE_INFORMATION_ASCQ		0x00

#define LOGICAL_UNIT_NOT_READY_CAUSE_NOT_REPORTABLE_ASC		0x04
#define LOGICAL_UNIT_NOT_READY_CAUSE_NOT_REPORTABLE_ASCQ	0x00

#define LOGICAL_UNIT_NOT_CONFIGURED_ASC			0x68
#define LOGICAL_UNIT_NOT_CONFIGURED_ASCQ		0x00

#define LOGICAL_UNIT_NOT_SUPPORTED_ASC			0x25
#define LOGICAL_UNIT_NOT_SUPPORTED_ASCQ			0x00

#define MODE_PARAMETERS_CHANGED_ASC			0x2A
#define MODE_PARAMETERS_CHANGED_ASCQ			0x01

#define RESERVATIONS_PREEMPTED_ASC			0x2A
#define RESERVATIONS_PREEMPTED_ASCQ			0x03

#define RESERVATIONS_RELEASED_ASC			0x2A
#define RESERVATIONS_RELEASED_ASCQ			0x04

#define REGISTRATIONS_PREEMPTED_ASC			0x2A
#define REGISTRATIONS_PREEMPTED_ASCQ			0x05

#define LOGICAL_UNIT_IS_IN_PROCESS_OF_BECOMING_READY_ASC	0x04
#define LOGICAL_UNIT_IS_IN_PROCESS_OF_BECOMING_READY_ASCQ	0x01

#define INTERNAL_TARGET_FAILURE_ASC			0x44
#define INTERNAL_TARGET_FAILURE_ASCQ			0x00

#define COMMAND_PHASE_ERROR_ASC				0x4A
#define COMMAND_PHASE_ERROR_ASCQ			0x00

#define PARAMETER_LIST_LENGTH_ERROR_ASC			0x1A 
#define PARAMETER_LIST_LENGTH_ERROR_ASCQ		0x00

#define INVALID_RELEASE_OF_PERSISTENT_RESERVATION_ASC	0x26
#define INVALID_RELEASE_OF_PERSISTENT_RESERVATION_ASCQ	0x04

#define INSUFFICIENT_RESERVATION_RESOURCES_ASC		0x55
#define INSUFFICIENT_RESERVATION_RESOURCES_ASCQ		0x02

#define INSUFFICIENT_REGISTRATION_RESOURCES_ASC		0x55
#define INSUFFICIENT_REGISTRATION_RESOURCES_ASCQ	0x04

#define BUS_RESET_ASC					0x29
#define BUS_RESET_ASCQ					0x00

#define LOGICAL_BLOCK_ADDRESS_OUT_OF_RANGE_ASC		0x21
#define LOGICAL_BLOCK_ADDRESS_OUT_OF_RANGE_ASCQ		0x00

#define UNREACHABLE_COPY_TARGET_ASC			0x08
#define UNREACHABLE_COPY_TARGET_ASCQ			0x04

#define MISCOMPARE_DURING_VERIFY_OPERATION_ASC		0x1D
#define MISCOMPARE_DURING_VERIFY_OPERATION_ASCQ		0x00

#define OPERATION_IN_PROGRESS_ASC			0x00
#define OPERATION_IN_PROGRESS_ASCQ			0x16

#define SPACE_ALLOCATION_FAILED_WRITE_PROTECT_ASC	0x27
#define SPACE_ALLOCATION_FAILED_WRITE_PROTECT_ASCQ	0x07

#define THIN_PROVISIONING_SOFT_THRESHOLD_REACHED_ASC	0x38
#define THIN_PROVISIONING_SOFT_THRESHOLD_REACHED_ASCQ	0x07

#endif /* SENSE_H_ */
