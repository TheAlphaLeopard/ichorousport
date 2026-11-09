// gml_Object_oRecreantBead_Destroy_0 @ 0x140caa430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRecreantBead_Destroy_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  double **ppdVar7;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [12];
  byte local_ac;
  double local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  double *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_d0 = "gml_Object_oRecreantBead_Create_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_c8 = 2;
  FUN_140e98b30(param_1,param_2);
  local_c8 = 4;
  uStack_fc = 0xf;
  local_108 = 0x100000100000287;
  uStack_120 = CONCAT44(0xf,uStack_100);
  local_128 = 0x100000100000287;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_128);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  local_c8 = 6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f310);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3fc3333333333333;
  local_c8 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09338);
  uStack_fc = 0xd;
  local_108 = 0;
  if (&local_108 != puVar3) {
    uStack_120 = CONCAT44(0xd,uStack_100);
    local_128 = 0;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  local_c8 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdab8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_c8 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdaf8);
  uVar5 = FUN_140e78f40(2);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar5;
  local_c8 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_c8 = 0xd;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c68);
  local_128 = _DAT_1419ed420;
  uStack_120 = uRam00000001419ed428;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_68 = local_b8;
  local_128 = _DAT_1419ed430;
  uStack_120 = uRam00000001419ed438;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_128);
  local_60 = &local_a8;
  FUN_140e609c0(param_1);
  uVar5 = FUN_140e78db0(&local_118,2,&local_68);
  local_108 = FUN_140e794b0(0x402e000000000000,0x403e000000000000);
  uStack_fc = 0;
  FUN_140042560(&local_108,uVar5);
  if (&local_108 != puVar3) {
    uStack_120 = CONCAT44(uStack_fc,uStack_100);
    local_128 = local_108;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0xe;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c98);
  local_128 = _DAT_141dc7550;
  uStack_120 = uRam0000000141dc7558;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  local_68 = local_b8;
  local_128 = _DAT_1419ed440;
  uStack_120 = uRam00000001419ed448;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_128);
  local_60 = &local_a8;
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)FUN_140e78db0(&local_118,2,&local_68);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_c8 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4028000000000000;
  local_c8 = 0x12;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f95e8);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 0xf;
  local_108 = 0x100000200000101;
  uStack_120 = CONCAT44(0xf,uStack_100);
  local_128 = 0x100000200000101;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_128);
  iVar1 = DAT_1419ef4e8;
  local_68 = local_b8;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = (double)iVar1;
  local_60 = &local_a8;
  uVar5 = CONCAT44(uVar2,DAT_1419fdca8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar5,&local_68);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_98) {
    local_128 = *puVar4;
    uStack_120 = puVar4[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
  }
  local_58 = &local_98;
  ppdVar7 = &local_60;
  uVar6 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,ppdVar7);
  if (puVar4 != &local_e8) {
    local_128 = *puVar4;
    uStack_120 = puVar4[1];
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  FUN_140e87440(&local_e8,DAT_1419ef268,0x80000000,&local_48,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppdVar7 & 0xffffffffffffff00);
  local_128 = _DAT_1419ed450;
  uStack_120 = uRam00000001419ed458;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_128);
  local_50 = local_88;
  FUN_140e609c0(param_1);
  uVar5 = 0;
  switch(local_dc) {
  case 6:
    uVar5 = local_e8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_e8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_e8);
    uVar5 = FUN_140e87250(uVar2);
  }
  puVar4 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_f8,1,&local_48,&local_50);
  if (puVar4 != puVar3) {
    local_128 = *puVar4;
    uStack_120 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_c8 = 0x14;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd4b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Object_oRecreantBead_Step_0,param_1);
  if (&local_108 != puVar3) {
    uStack_120 = CONCAT44(uStack_fc,uStack_100);
    local_128 = local_108;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

