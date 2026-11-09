// gml_Script_anon_3249_gml_Object_oBossThePest_Other_76 @ 0x140838290

undefined8 *
gml_Script_anon_3249_gml_Object_oBossThePest_Other_76
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *local_res18 [2];
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff10;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_60 = "gml_Script_anon@2943@gml_Object_oBossThePest_Other_76";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x95;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_44 = 0;
  local_50 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x96;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_d8,uVar4,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_e8 = local_d8;
  uStack_e0 = uStack_d0;
  uStack_dc = uStack_cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_res18[0] = local_78;
  ppuVar6 = local_res18;
  uVar4 = CONCAT44(uVar5,DAT_141a02ef8);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_50,1,uVar4,ppuVar6);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_58 = 0x96;
  }
  else {
    local_58 = 0x97;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    uStack_dc = 6;
    uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_c8,uVar4,uVar7);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uStack_dc = 0;
    local_e8 = (longlong *)0x401c000000000000;
    FUN_140042560(&local_e8,uVar2);
    uStack_ac = local_bc;
    uStack_b0 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_b8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_b8,&local_c8);
    }
    FUN_1400460e0(&local_b8,&local_e8);
    local_38 = (undefined4)local_b8;
    uStack_34 = local_b8._4_4_;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_38);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_d8,uVar4,uVar7);
    FUN_140e87930(&local_d8,DAT_141a08cf8,0x80000000,&local_98);
    local_58 = 0x98;
    uStack_dc = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_88,uVar4,uVar7);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_38 = (undefined4)local_88;
    uStack_34 = local_88._4_4_;
    uStack_30 = uStack_80;
    uStack_2c = uStack_7c;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_38);
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar2,DAT_1419f6278,0x80000000,&local_d8,uVar4 & 0xffffffffffffff00,
                  uVar7 & 0xffffffffffffff00);
    FUN_140e87930(&local_d8,DAT_141a08d88,0x80000000,&local_a8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

