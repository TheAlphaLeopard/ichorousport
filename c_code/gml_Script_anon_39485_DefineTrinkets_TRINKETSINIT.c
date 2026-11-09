// gml_Script_anon_39485_DefineTrinkets_TRINKETSINIT @ 0x140616a90

undefined8 *
gml_Script_anon_39485_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *local_res18;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffec0;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined1 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [12];
  byte local_d4;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_f0 = "gml_Script_anon@38824@DefineTrinkets@TRINKETSINIT";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x568;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e0,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_bc = 0xffffff;
  local_c8 = (undefined1 *)0x0;
  uStack_11c = 0xffffff;
  local_128 = (undefined1 *)0x0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x569;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_1419f0378,0x80000000,&local_48,uVar10,in_stack_fffffffffffffec0);
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5958,0x80000000,&local_c8,uVar10,in_stack_fffffffffffffec0);
  iVar2 = FUN_140e851f0(&local_48,&local_c8,DAT_141955260,0);
  if (iVar2 != 0) {
    local_e8 = 0x569;
    goto LAB_1406171fe;
  }
  local_e8 = 0x56a;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_128,uVar10,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar10 >> 0x20);
  local_138 = local_128;
  uStack_130 = uStack_120;
  uStack_12c = uStack_11c;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_138);
  local_res18 = local_e0;
  ppuVar11 = &local_res18;
  uVar10 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar10,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_e8 = 0x56a;
    goto LAB_1406171fe;
  }
  local_e8 = 0x56b;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_128,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_141a56cd0,0x80000000,&local_58,uVar10,uVar12);
  uStack_12c = 10;
  local_138 = (undefined1 *)0x2;
  iVar2 = FUN_140e851f0(&local_58,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    local_e8 = 0x56b;
    goto LAB_1406171fe;
  }
  local_e8 = 0x56c;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_128,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_141a57480,0x80000000,&local_68,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_68,DAT_141a58110,0x80000000,&local_78,uVar10,uVar12);
  cVar1 = FUN_140e491e0(&local_78);
  if (cVar1 == '\0') {
    local_e8 = 0x56c;
    goto LAB_1406171fe;
  }
  local_e8 = 0x56e;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (0 < param_4) {
    puVar8 = (undefined8 *)*param_5;
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_128,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_1419f59d8,0x80000000,&local_88,uVar10,uVar12);
  FUN_140e87440(uVar4,DAT_1419f5958,0x80000000,&local_c8,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  local_138 = local_c8;
  uStack_130 = uStack_c0;
  uStack_12c = uStack_bc;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_138);
  local_res18 = local_e0;
  switch(uStack_11c) {
  default:
switchD_140616f75_caseD_1:
    puVar6 = (undefined1 *)0x0;
    break;
  case 6:
    puVar6 = local_128;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_128 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140616f75_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_128);
    puVar6 = (undefined1 *)FUN_140e87250(uVar3);
  }
  ppuVar11 = &local_res18;
  puVar8 = &local_88;
  puVar7 = (undefined8 *)FUN_140e63610(puVar6,param_2,&local_118,1,puVar8,ppuVar11);
  if (puVar7 != &local_108) {
    local_138 = (undefined1 *)*puVar7;
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
  }
  local_e8 = 0x56f;
  uStack_12c = 0;
  local_138 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_108,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    local_e8 = 0x56f;
  }
  else {
    local_e8 = 0x571;
    uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar10 = (ulonglong)puVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_108,DAT_1419ff148,0x80000000,&local_98,uVar10,uVar12);
    uStack_12c = 0;
    local_138 = (undefined1 *)0x3fe0000000000000;
    FUN_140042560(&local_98,&local_138);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140e87930(&local_108,DAT_1419ff148,0x80000000,&local_98);
    local_e8 = 0x572;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_108,DAT_1419ff0c8,0x80000000,&local_a8,uVar10,uVar12);
    uStack_12c = 0;
    local_138 = (undefined1 *)0x3fe0000000000000;
    FUN_140042560(&local_a8,&local_138);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140e87930(&local_108,DAT_1419ff0c8,0x80000000,&local_a8);
    local_e8 = 0x573;
    FUN_140e87440(&local_108,DAT_141a03598,0x80000000,&local_b8,uVar10 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    uStack_12c = 0;
    local_138 = (undefined1 *)0x4000000000000000;
    FUN_140042560(&local_b8,&local_138);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140e87930(&local_108,DAT_141a03598,0x80000000,&local_b8);
  }
LAB_1406171fe:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_e0,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

