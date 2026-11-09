// gml_Script_DefineBuffs @ 0x1403f2850

undefined8 *
gml_Script_DefineBuffs
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffef0;
  undefined1 **ppuVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_d0 = "gml_Script_anon@31013@DefineDebuffs@OFFERINGSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x509;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x50b;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_f8,uVar8,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar8 >> 0x20);
  local_b8 = local_f8;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_78 = local_50;
  ppuVar9 = &local_78;
  uVar8 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 0x50b;
    goto LAB_1403f2c55;
  }
  local_c8 = 0x50c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = *(undefined8 **)(param_5 + 8);
  }
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_f8,uVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar4 = param_1;
  FUN_140e87170(&local_f8,DAT_141a1f580,0x80000000,&local_98,param_1,param_2);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_b8 = local_98;
  uStack_b0 = uStack_90;
  uStack_ac = uStack_8c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_b8);
  local_88 = &local_70;
  uStack_ac = 0xf;
  local_b8 = 0x10000000000009d;
  local_38 = 0x9d;
  uStack_34 = 0x1000000;
  uStack_30 = uStack_b0;
  uStack_2c = 0xf;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_38);
  local_80 = local_60;
  ppuVar10 = &local_88;
  uVar8 = CONCAT44(uVar3,DAT_1419f60e8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 0x50c;
    goto LAB_1403f2c55;
  }
  local_c8 = 0x50e;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0x4034000000000000;
  local_c8 = 0x50f;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (1 < param_4) {
    puVar6 = *(undefined8 **)(param_5 + 8);
  }
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f4e0,0x80000000,&local_f8,uVar8,uVar11);
  FUN_140e87440(&local_f8,DAT_1419f5f68,0x80000000,&local_a8,uVar8 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  local_88 = &local_e8;
  uVar4 = 0;
  switch(uStack_ec) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1403f2bfb_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_f8);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_f8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_f8 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1403f2bfb_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_108,1,&local_a8,&local_88);
LAB_1403f2c55:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

