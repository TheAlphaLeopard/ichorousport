// gml_Object_oThunderPot_Step_0 @ 0x140db5420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oThunderPot_Step_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  double **ppdVar7;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  double *local_48;
  undefined8 *local_40;
  undefined1 *local_38 [2];
  
  local_100 = "gml_Object_oThunderPot_Create_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_f8 = 2;
  FUN_140e98b30(param_1,param_2);
  local_f8 = 4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4014000000000000;
  local_f8 = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_118);
  local_f8 = 6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01688);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4054000000000000;
  local_f8 = 7;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a208);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_12c = 0xf;
  local_138 = 0x1000002000000b1;
  uStack_150 = CONCAT44(0xf,uStack_130);
  local_158 = 0x1000002000000b1;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_68 = local_d8;
  uStack_12c = 0xf;
  local_138 = 0x1000002000000b2;
  uStack_150 = CONCAT44(0xf,uStack_130);
  local_158 = 0x1000002000000b2;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  local_60 = local_c8;
  uStack_12c = 0xf;
  local_138 = 0x1000002000000b3;
  uStack_150 = CONCAT44(0xf,uStack_130);
  local_158 = 0x1000002000000b3;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  local_58 = local_b8;
  uStack_12c = 0xf;
  local_138 = 0x1000002000000b4;
  uStack_150 = CONCAT44(0xf,uStack_130);
  local_158 = 0x1000002000000b4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_158);
  iVar1 = DAT_1419ef4e8;
  local_50 = local_a8;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = (double)iVar1;
  uVar5 = CONCAT44(uVar2,DAT_1419fdca8);
  local_48 = &local_98;
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,4,uVar5,&local_68);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_88) {
    local_158 = *puVar4;
    uStack_150 = puVar4[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_158);
  }
  local_40 = &local_88;
  ppdVar7 = &local_48;
  uVar6 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar6,ppdVar7);
  if (puVar4 != &local_148) {
    local_158 = *puVar4;
    uStack_150 = puVar4[1];
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_158);
  }
  FUN_140e87440(&local_148,DAT_1419ef268,0x80000000,&local_f0,uVar6 & 0xffffffffffffff00,
                (ulonglong)ppdVar7 & 0xffffffffffffff00);
  local_158 = _DAT_1419ee090;
  uStack_150 = uRam00000001419ee098;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_158);
  local_38[0] = local_78;
  FUN_140e609c0(param_1);
  uVar5 = 0;
  switch(local_13c) {
  case 6:
    uVar5 = local_148;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_148);
    uVar5 = FUN_140e87250(uVar2);
  }
  puVar4 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_168,1,&local_f0,local_38);
  if (puVar4 != puVar3) {
    local_158 = *puVar4;
    uStack_150 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_158);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

