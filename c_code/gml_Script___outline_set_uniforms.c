// gml_Script___outline_set_uniforms @ 0x1400ed8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___outline_set_uniforms(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  double local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  longlong **local_60;
  double *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_70 = "gml_Script___outline_init";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x40;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_fc = 0;
  local_108 = 0;
  local_2c = 0;
  local_38 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x41;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 6;
  local_d8 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  iVar1 = DAT_141a04648;
  local_60 = &local_d8;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = (double)iVar1;
  local_58 = &local_c8;
  uVar3 = CONCAT44(uVar7,DAT_141a035d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_38,2,uVar3,&local_60);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != &local_b8) {
    local_f8 = (longlong *)*puVar4;
    uStack_f0 = puVar4[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  local_50 = &local_b8;
  uVar6 = CONCAT44(uVar7,DAT_1419fdc08);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar6,&local_50);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar2 = FUN_140e491e0(uVar3);
  if (cVar2 != '\0') {
    local_68 = 0x42;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a046c8);
    uStack_f0 = CONCAT44(0xf,(undefined4)uStack_f0);
    local_f8 = (longlong *)0x100000800000001;
    local_118 = 0x100000800000001;
    uStack_110 = uStack_f0;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_48 = local_a8;
    local_118 = _DAT_141dcb358;
    uStack_110 = uRam0000000141dcb360;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_118);
    local_40 = local_98;
    FUN_140e609c0(param_1);
    uVar3 = CONCAT44(uVar7,DAT_141a04778);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar3,&local_48);
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar5 != puVar4) {
      local_118 = *puVar5;
      uStack_110 = puVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_118);
    }
    FUN_140e60910(1);
    local_68 = 0x43;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a046b8);
    uStack_f0 = CONCAT44(0xf,(undefined4)uStack_f0);
    local_f8 = (longlong *)0x100000800000001;
    local_118 = 0x100000800000001;
    uStack_110 = uStack_f0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
    local_60 = &local_d8;
    local_118 = _DAT_141dcb338;
    uStack_110 = uRam0000000141dcb340;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
    local_58 = &local_c8;
    FUN_140e609c0(param_1);
    uVar3 = CONCAT44(uVar7,DAT_141a04778);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar3,&local_60);
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar5 != puVar4) {
      local_118 = *puVar5;
      uStack_110 = puVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_118);
    }
    FUN_140e60910(1);
    local_68 = 0x44;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04638);
    uStack_f0 = CONCAT44(0xf,(undefined4)uStack_f0);
    local_f8 = (longlong *)0x100000800000001;
    local_118 = 0x100000800000001;
    uStack_110 = uStack_f0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
    local_60 = &local_d8;
    local_118 = _DAT_141dcb348;
    uStack_110 = uRam0000000141dcb350;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
    local_58 = &local_c8;
    FUN_140e609c0(param_1);
    uVar3 = CONCAT44(uVar7,DAT_141a04778);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar3,&local_60);
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar5 != puVar4) {
      local_118 = *puVar5;
      uStack_110 = puVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_118);
    }
    FUN_140e60910(1);
    local_68 = 0x45;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04588);
    uStack_f0 = CONCAT44(0xf,(undefined4)uStack_f0);
    local_f8 = (longlong *)0x100000800000001;
    local_118 = 0x100000800000001;
    uStack_110 = uStack_f0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
    local_60 = &local_d8;
    local_118 = _DAT_141dcb328;
    uStack_110 = uRam0000000141dcb330;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
    local_58 = &local_c8;
    FUN_140e609c0(param_1);
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar7,DAT_141a04778),&local_60);
    if (puVar5 != puVar4) {
      local_118 = *puVar5;
      uStack_110 = puVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_118);
    }
    FUN_140e60910(1);
    local_68 = 0x47;
    local_f8 = (longlong *)0x3ff0000000000000;
    uVar7 = (undefined4)uStack_f0;
    uStack_f0 = CONCAT44(0xd,uVar7);
    local_118 = 0x3ff0000000000000;
    uStack_110 = CONCAT44(0xd,uVar7);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_118);
    uStack_f0 = CONCAT44(6,(undefined4)uStack_f0);
    local_f8 = param_1;
    FUN_140e87930(&local_f8,DAT_141a04648,0x80000000,&local_88);
    if ((1 << ((byte)((ulonglong)uStack_f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

