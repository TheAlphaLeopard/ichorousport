// gml_Script_anon_5890____struct___327_gml_Object_oBossClot_Create_0 @ 0x1406ff140

undefined8 *
gml_Script_anon_5890____struct___327_gml_Object_oBossClot_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff60;
  undefined1 **ppuVar6;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Script_anon@5772@___struct___325@gml_Object_oBossClot_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xfd;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xfe;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a06528,0x80000000,&local_98,uVar4,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_68 = (undefined4)local_98;
  uStack_64 = local_98._4_4_;
  uStack_60 = uStack_90;
  uStack_5c = uStack_8c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_68);
  local_78 = local_40;
  ppuVar6 = &local_78;
  uVar4 = CONCAT44(uVar5,DAT_141a02ef8);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_88,1,uVar4,ppuVar6);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_48 = 0xff;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar2,DAT_141a06528,0x80000000,&local_98,uVar4 & 0xffffffffffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_30);
    }
    FUN_140041b80(local_30,&local_68);
    local_70 = local_30;
    FUN_140edd0e0(param_1,param_2,1,&local_70);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

