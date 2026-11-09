// gml_Script_InputVibrateGetEventCount @ 0x140382600

undefined8 *
gml_Script_InputVibrateGetEventCount
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined4 uVar6;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48 [4];
  
  local_70 = "gml_Script_InputVibrateDirect";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 6;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x18;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1403826d6:
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_e8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_88) goto LAB_1403826d6;
  }
  local_48[0] = &local_88;
  ppuVar5 = local_48;
  puVar3 = (undefined8 *)gml_Script_InputDeviceIsActive(param_1,param_2,&local_f8,1,ppuVar5);
  uVar6 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  if (puVar3 != &local_d8) {
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  local_68 = 0x19;
  iVar1 = FUN_140e851f0(&local_d8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 != 0) {
    local_68 = 0x1b;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50();
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_60 = &local_d8;
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    uStack_dc = 0;
    local_e8 = 0x40efffe000000000;
    FUN_140042560(&local_e8,puVar3);
    local_c8 = (undefined4)local_e8;
    uStack_c4 = local_e8._4_4_;
    uStack_c0 = uStack_e0;
    uStack_bc = uStack_dc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_58 = &local_a8;
    if (2 < param_4) {
      puVar4 = (undefined8 *)param_5[2];
    }
    uStack_dc = 0;
    local_e8 = 0x40efffe000000000;
    FUN_140042560(&local_e8,puVar4);
    local_c8 = (undefined4)local_e8;
    uStack_c4 = local_e8._4_4_;
    uStack_c0 = uStack_e0;
    uStack_bc = uStack_dc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar2 = DAT_1419febf8;
    goto LAB_1403829e2;
  }
  local_68 = 0x23;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140382910:
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_b8) goto LAB_140382910;
  }
  local_60 = &local_b8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_14038295a:
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_a8) goto LAB_14038295a;
  }
  local_58 = &local_a8;
  if ((param_4 < 3) || (puVar4 = (undefined8 *)param_5[2], puVar4 != &local_98)) {
    local_c8 = *(undefined4 *)puVar4;
    uStack_c4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_c0 = *(undefined4 *)(puVar4 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  uVar2 = DAT_1419f4198;
LAB_1403829e2:
  local_50 = &local_98;
  FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar6,uVar2),&local_60);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

