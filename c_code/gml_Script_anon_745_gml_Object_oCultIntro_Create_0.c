// gml_Script_anon_745_gml_Object_oCultIntro_Create_0 @ 0x1408da660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_745_gml_Object_oCultIntro_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_70 = "gml_Object_oCultIntro_Create_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_68 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bc8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_68 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_68 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45ac8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_68 = 7;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58320);
  uStack_fc = 0xf;
  local_108 = (longlong *)0x1000001000000c3;
  local_f8 = (longlong *)0x1000001000000c3;
  uStack_f0 = uStack_100;
  uStack_ec = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_50 = local_c8;
  local_108 = (longlong *)CONCAT44(uRam0000000141dc6ce4,_DAT_141dc6ce0);
  uStack_100 = uRam0000000141dc6ce8;
  uStack_fc = uRam0000000141dc6cec;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_48 = local_b8;
  FUN_140e609c0(param_1);
  ppuVar5 = &local_50;
  uVar3 = CONCAT44(uVar4,DAT_1419fdca8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar3,ppuVar5);
  if (puVar2 != puVar1) {
    local_108 = (longlong *)*puVar2;
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_108);
  }
  FUN_140e60910(1);
  local_68 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58340);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4024000000000000;
  local_68 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45148);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_68 = 0xb;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_ec = 6;
  uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_d8,uVar3,uVar6);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_88,uVar3,uVar6 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_108 = local_d8;
  uStack_100 = uStack_d0;
  uStack_fc = uStack_cc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_50 = local_c8;
  uStack_ec = uStack_7c;
  uStack_f0 = uStack_80;
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_f8 = local_88;
  }
  else {
    FUN_1400419b0(&local_f8,&local_88);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,0x30);
  FUN_1400460e0(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_f8;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_48 = local_b8;
  local_108 = (longlong *)CONCAT44(uRam0000000141dd79ec,_DAT_141dd79e8);
  uStack_100 = uRam0000000141dd79f0;
  uStack_fc = DAT_141dd79f4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_40 = local_a8;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x10000000000005b;
  local_f8 = (longlong *)0x10000000000005b;
  uStack_f0 = uStack_100;
  uStack_ec = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_f8);
  local_38 = local_98;
  ppuVar5 = &local_50;
  uVar3 = CONCAT44(uVar4,DAT_141a0a7c8);
  FUN_140e634e0(param_1,param_2,&local_e8,4,uVar3,ppuVar5);
  local_68 = 0xc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_fc = 6;
  uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_d8,uVar3,uVar6);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_88,uVar3,uVar6 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_ec = uStack_cc;
  uStack_f0 = uStack_d0;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_f8 = local_d8;
  }
  else {
    FUN_1400419b0(&local_f8,&local_d8);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,0x28);
  FUN_1400462a0(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_f8;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_50 = local_c8;
  local_108 = local_88;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_48 = local_b8;
  local_108 = (longlong *)CONCAT44(uRam0000000141dd79ec,_DAT_141dd79e8);
  uStack_100 = uRam0000000141dd79f0;
  uStack_fc = DAT_141dd79f4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_40 = local_a8;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x100000000000071;
  local_f8 = (longlong *)0x100000000000071;
  uStack_f0 = uStack_100;
  uStack_ec = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_f8);
  local_38 = local_98;
  ppuVar5 = &local_50;
  uVar3 = CONCAT44(uVar4,DAT_141a0a7c8);
  FUN_140e634e0(param_1,param_2,&local_e8,4,uVar3,ppuVar5);
  local_68 = 0xd;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_fc = 6;
  uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_d8,uVar3,uVar6);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_88,uVar3,uVar6 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_ec = uStack_cc;
  uStack_f0 = uStack_d0;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_f8 = local_d8;
  }
  else {
    FUN_1400419b0(&local_f8,&local_d8);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,0x28);
  FUN_1400460e0(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_f8;
  uStack_100 = uStack_f0;
  uStack_fc = uStack_ec;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_50 = local_c8;
  local_108 = local_88;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_48 = local_b8;
  local_108 = (longlong *)CONCAT44(uRam0000000141dd79ec,_DAT_141dd79e8);
  uStack_100 = uRam0000000141dd79f0;
  uStack_fc = DAT_141dd79f4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_40 = local_a8;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x100000000000071;
  local_f8 = (longlong *)0x100000000000071;
  uStack_f0 = uStack_100;
  uStack_ec = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_f8);
  local_38 = local_98;
  FUN_140e634e0(param_1,param_2,&local_e8,4,CONCAT44(uVar4,DAT_141a0a7c8),&local_50);
  local_68 = 0xf;
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  local_54 = 0;
  local_60 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_60);
  local_68 = 0x12;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58330);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Object_oCultIntro_Alarm_0,param_1);
  if (&local_108 != puVar1) {
    local_f8 = local_108;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_68 = 0x22;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45d18);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Object_oCultIntro_Step_0,param_1);
  if (&local_108 != puVar1) {
    local_f8 = local_108;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

