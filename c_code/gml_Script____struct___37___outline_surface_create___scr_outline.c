// gml_Script____struct___37___outline_surface_create___scr_outline @ 0x1400ee0b0

undefined8 *
gml_Script____struct___37___outline_surface_create___scr_outline
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 *local_res18;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined1 local_28 [12];
  byte local_1c;
  
  local_90 = "gml_Script___outline_start";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x4c;
  _eh_vector_constructor_iterator_(local_28,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x4d;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar5 = 0;
  uVar3 = gml_Script___outline_start(param_1,param_2,&local_e8,0,0);
  in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a048b8,0x80000000,&local_38,uVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10);
  cVar1 = FUN_140e491e0(&local_38);
  if (cVar1 == '\0') {
    local_88 = 0x52;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar5 = 0;
    uVar3 = gml_Script___outline_start(param_1,param_2,&local_e8,0,0);
    in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a04748,0x80000000,&local_48,uVar5 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff10);
    cVar1 = FUN_140e491e0(&local_48);
    if (cVar1 == '\0') {
      local_88 = 0x53;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uVar5 = 0;
      uVar3 = gml_Script___outline_start(param_1,param_2,&local_c8,0,0);
      in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_141a04928,0x80000000,&local_58,uVar5,in_stack_ffffffffffffff10);
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(&local_58,DAT_141a048c8,0x80000000,&local_68,uVar5,
                    in_stack_ffffffffffffff10 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar5 >> 0x20);
      uStack_d0 = CONCAT44(uStack_5c,uStack_60);
      local_d8 = local_68;
      if ((1 << (local_1c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_28);
      }
      FUN_140041b80(local_28,&local_d8);
      local_res18 = local_28;
      FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar6,DAT_141a03478),&local_res18);
      local_88 = 0x54;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = CONCAT44(0xd,(undefined4)uStack_d0);
      local_78 = 1.0;
      uStack_70 = (undefined4)uStack_d0;
      uStack_6c = 0xd;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_78);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar3 = gml_Script___outline_start(param_1,param_2,&local_e8,0,0);
      FUN_140e87930(uVar3,DAT_141a04748,0x80000000,&local_a8);
    }
  }
  else {
    local_88 = 0x4e;
    uStack_d0 = CONCAT44(0xf,(undefined4)uStack_d0);
    local_d8 = 0x100000800000001;
    iVar2 = FUN_140ec9d80();
    uStack_6c = 0;
    local_78 = (double)iVar2;
    iVar2 = FUN_140e851f0(&local_78,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar2 != 0) {
      local_88 = 0x4f;
      uStack_d0 = CONCAT44(0xf,(undefined4)uStack_d0);
      local_d8 = 0x100000800000001;
      dVar4 = (double)FUN_140e4b060(&local_d8);
      FUN_140ec9e10((int)dVar4);
      if ((1 << ((byte)((ulonglong)uStack_d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
    }
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(local_28,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

