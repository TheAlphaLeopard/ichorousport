// gml_Script_anon_56824____struct___690_gml_Object_oPlayer_Create_0 @ 0x140c48cb0

undefined8 *
gml_Script_anon_56824____struct___690_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined1 local_c0 [12];
  byte local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  
  local_100 = "gml_Script_anon@56312@___struct___689@gml_Object_oPlayer_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0xbaf;
  _eh_vector_constructor_iterator_(local_d0,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_10c = 0xffffff;
  local_118 = 0;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0xbb1;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  local_60 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_11c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_120 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_128,puVar8);
  }
  uStack_14c = 0;
  local_158 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_128,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_12c = uStack_11c;
  uStack_130 = uStack_120;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_138 = local_128;
  }
  else {
    FUN_1400419b0(&local_138,&local_128);
  }
  FUN_140042560(&local_138,uVar6);
  FUN_1400460e0(local_60,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_f8 = 0xbb4;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_158 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d0);
  }
  FUN_140041b80(local_d0,&local_158);
  local_a0 = local_d0;
  local_158 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c0);
  }
  FUN_140041b80(local_c0,&local_158);
  local_98 = local_c0;
  uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_148,2,&local_a0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_f8 = 0xbb6;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_10c = 0;
    local_118 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_118);
  }
  local_f8 = 0xbba;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
  uVar10 = 0;
  uVar6 = FUN_140e63610(param_1,param_2,&local_148,0,uVar9,0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_f8 = 0xbbc;
    uStack_14c = 0xd;
    local_158 = (longlong *)0x3ff0000000000000;
    if (&local_158 != puVar7) {
      local_138 = 0x3ff0000000000000;
      uStack_130 = uStack_150;
      uStack_12c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_138);
    }
    local_f8 = 0xbbd;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_70,uVar9 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    local_158 = (longlong *)CONCAT44(DAT_141dda818._4_4_,(undefined4)DAT_141dda818);
    uStack_150 = DAT_141dda820;
    uStack_14c = DAT_141dda824;
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_158);
    local_a0 = local_d0;
    uVar6 = FUN_140069500(uVar6);
    FUN_140e63610(uVar6,param_2,&local_148,1,&local_70,&local_a0);
  }
  local_f8 = 0xbc0;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uStack_14c = 0;
  local_158 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(puVar7,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar4 == 0) {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_138,puVar7);
    }
    puVar7 = &local_138;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_128,puVar7);
    }
    puVar7 = &local_128;
    bVar2 = true;
    bVar1 = false;
  }
  FUN_140e609c0(param_1);
  if (puVar7 != puVar8) {
    local_158 = (longlong *)*puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_158);
  }
  if ((bVar1) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((bVar2) && ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0xbc2;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_148,0,uVar6,0);
  local_f8 = 0xbc4;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar10 = 0;
  FUN_140e63610(param_1,param_2,&local_148,0,uVar9,0);
  local_f8 = 0xbc6;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_14c = 0;
  local_158 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(uVar6,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar4 < 1) goto LAB_140c49730;
  uStack_14c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_80,uVar9,uVar10);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)0x100000100000411;
  iVar4 = FUN_140e851f0(&local_80,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar4 != 0) goto LAB_140c49730;
  local_f8 = 0xbc8;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x100000100000406;
  local_138 = 0x100000100000406;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_138);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b0);
  local_f8 = 0xbc9;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_e0);
  local_f8 = 0xbca;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_118);
  local_f8 = 0xbcb;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_f0,uVar9,uVar10);
  FUN_140e87440(&local_f0,DAT_141a55540,0x80000000,&local_90,uVar9 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_158 = (longlong *)CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
  uStack_150 = DAT_141dda670;
  uStack_14c = DAT_141dda674;
  if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d0);
  }
  FUN_140041b80(local_d0,&local_158);
  local_a0 = local_d0;
  uVar6 = 0;
  switch(local_e4) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140c496d3_caseD_0:
    uVar5 = FUN_140e4a8b0(&local_f0);
    uVar6 = FUN_140e87250(uVar5);
    break;
  case 6:
    uVar6 = local_f0;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_f0 >> 0x20);
    if ((iVar4 == 0x1000000) || (iVar4 == 0x4000001)) goto switchD_140c496d3_caseD_0;
  }
  FUN_140e63610(uVar6,param_2,&local_148,1,&local_90,&local_a0);
  local_f8 = 0xbcc;
LAB_140c49730:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_d0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

