// gml_Script_anon_9377_gml_Object_oBossEmbraceHalf_Create_0 @ 0x140767290

undefined8 *
gml_Script_anon_9377_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8 [2];
  undefined8 local_c8 [2];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  
  local_a0 = "gml_Script_anon@8701@gml_Object_oBossEmbraceHalf_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x112;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x113;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_140767383:
    local_108 = *puVar3;
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    FUN_140041b80(&local_128,&local_108);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_128) goto LAB_140767383;
  }
  local_98 = 0x114;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_10c = 6;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_88,uVar6,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_108 = local_88;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_68 = local_d8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 == local_c8) goto LAB_14076749d;
  }
  local_108 = *puVar3;
  uStack_100 = *(undefined4 *)(puVar3 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
LAB_14076749d:
  local_60 = local_c8;
  puVar3 = (undefined8 *)FUN_140e79230(&local_138,2,&local_68);
  if (puVar3 != &local_f8) {
    local_108 = *puVar3;
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_108);
  }
  local_98 = 0x115;
  while( true ) {
    uVar7 = (undefined4)(uVar6 >> 0x20);
    iVar2 = FUN_140e851f0(&local_128,&local_f8,DAT_141955260,1);
    if (iVar2 < 1) break;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08128);
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_140767597:
      local_e8 = *(undefined4 *)puVar3;
      uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_e0 = *(undefined4 *)(puVar3 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_e8);
    }
    else {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 != local_d8) goto LAB_140767597;
    }
    local_68 = local_d8;
    uStack_10c = uStack_11c;
    uStack_110 = uStack_120;
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_118 = local_128;
    }
    else {
      FUN_1400419b0(&local_118,&local_128);
    }
    FUN_1400460e0(&local_118,uVar4);
    local_e8 = (undefined4)local_118;
    uStack_e4 = local_118._4_4_;
    uStack_e0 = uStack_110;
    uStack_dc = uStack_10c;
    if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_e8);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_60 = local_c8;
    uStack_fc = 0xf;
    local_108 = 0x100000000000149;
    local_e8 = 0x149;
    uStack_e4 = 0x1000000;
    uStack_e0 = uStack_100;
    uStack_dc = 0xf;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_58 = local_b8;
    uVar6 = CONCAT44(uVar7,DAT_141a12628);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_138,3,uVar6,&local_68);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') break;
    local_98 = 0x115;
    local_6c = 0;
    local_78 = 0x3ff0000000000000;
    FUN_1400462a0(&local_128,&local_78);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
  }
  local_98 = 0x116;
  if (&local_128 != param_3) {
    local_e8 = (undefined4)local_128;
    uStack_e4 = local_128._4_4_;
    uStack_e0 = uStack_120;
    uStack_dc = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

