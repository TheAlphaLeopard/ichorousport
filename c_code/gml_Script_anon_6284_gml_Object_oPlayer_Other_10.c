// gml_Script_anon_6284_gml_Object_oPlayer_Other_10 @ 0x140c69250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6284_gml_Object_oPlayer_Other_10
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
  undefined8 uVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [12];
  byte local_e4;
  undefined1 local_e0 [12];
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar9 = 0;
  local_100 = "gml_Script_anon@5492@gml_Object_oPlayer_Other_10";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0xd9;
  _eh_vector_constructor_iterator_(local_f0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_13c = 0xffffff;
  local_148 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_11c = 0;
  local_128 = 0;
  local_10c = 0;
  local_118 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0xda;
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_f8 = 0xda;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_140c69d58;
  }
  local_f8 = 0xdc;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_138 = CONCAT44(uRam00000001419ecf84,_DAT_1419ecf80);
  uStack_130 = uRam00000001419ecf88;
  uStack_12c = uRam00000001419ecf8c;
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f0);
  }
  FUN_140041b80(local_f0,&local_138);
  local_b0 = local_f0;
  local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_130 = DAT_1419df7b8;
  uStack_12c = DAT_1419df7bc;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_138);
  local_a8 = local_e0;
  bVar2 = false;
  bVar1 = true;
  uVar6 = gml_Script_InputPressedMany(param_1,param_2,&local_128,2,&local_b0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_f8 = 0xdd;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b08);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5e48);
    FUN_140e609c0(param_1);
    if (puVar7 != puVar8) {
      local_138 = *puVar7;
      uStack_130 = *(undefined4 *)(puVar7 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_138);
    }
    FUN_140e60910(1);
  }
  local_f8 = 0xdf;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e48);
  uStack_12c = 0;
  local_138 = 0;
  iVar4 = FUN_140e851f0(uVar6,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar4 < 1) {
    local_f8 = 0xf1;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_140c69d58;
  }
  local_f8 = 0xe1;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5e48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_f8 = 0xe3;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
  uVar12 = 0;
  uVar6 = FUN_140e63610(param_1,param_2,&local_128,0,uVar6,0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_138 = CONCAT44(uRam00000001419ed0d4,_DAT_1419ed0d0);
    uStack_130 = uRam00000001419ed0d8;
    uStack_12c = uRam00000001419ed0dc;
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f0);
    }
    FUN_140041b80(local_f0,&local_138);
    local_b0 = local_f0;
    local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e0);
    }
    FUN_140041b80(local_e0,&local_138);
    local_a8 = local_e0;
    ppuVar10 = &local_b0;
    uVar6 = gml_Script_InputCheckMany(param_1,param_2,&local_118,2,ppuVar10);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 == '\0') goto LAB_140c697dc;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8a28);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 == '\0') goto LAB_140c697dc;
    local_f8 = 0xe5;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_148,uVar11,uVar12);
    FUN_140e87440(&local_148,DAT_141a55540,0x80000000,&local_98,uVar11 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    local_138 = CONCAT44(uRam0000000141ddaa4c,_DAT_141ddaa48);
    uStack_130 = uRam0000000141ddaa50;
    uStack_12c = DAT_141ddaa54;
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_138);
    local_a0 = local_d0;
    switch(local_13c) {
    case 0:
    case 7:
    case 10:
    case 0xd:
switchD_140c69778_caseD_0:
      uVar5 = FUN_140e4a8b0(&local_148);
      uVar9 = FUN_140e87250(uVar5);
      break;
    case 6:
      uVar9 = local_148;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_148 >> 0x20);
      if ((iVar4 == 0x1000000) || (iVar4 == 0x4000001)) goto switchD_140c69778_caseD_0;
    }
    FUN_140e63610(uVar9,param_2,&local_c0,1,&local_98,&local_a0);
    local_f8 = 0xe6;
    goto LAB_140c69d2d;
  }
LAB_140c697dc:
  local_f8 = 0xe9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_138 = CONCAT44(uRam00000001419ecfe4,_DAT_1419ecfe0);
  uStack_130 = uRam00000001419ecfe8;
  uStack_12c = uRam00000001419ecfec;
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f0);
  }
  FUN_140041b80(local_f0,&local_138);
  local_b0 = local_f0;
  local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_130 = DAT_1419df7b8;
  uStack_12c = DAT_1419df7bc;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_138);
  local_a8 = local_e0;
  ppuVar10 = &local_b0;
  uVar6 = gml_Script_InputCheckMany(param_1,param_2,&local_128,2,ppuVar10);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_f8 = 0xea;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_148,uVar11,uVar12);
    FUN_140e87440(&local_148,DAT_141a55540,0x80000000,&local_98,uVar11 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    local_138 = CONCAT44(uRam0000000141ddab7c,_DAT_141ddab78);
    uStack_130 = uRam0000000141ddab80;
    uStack_12c = DAT_141ddab84;
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_138);
    local_a0 = local_d0;
    switch(local_13c) {
    case 0:
    case 7:
    case 10:
    case 0xd:
switchD_140c69985_caseD_0:
      uVar5 = FUN_140e4a8b0(&local_148);
      uVar9 = FUN_140e87250(uVar5);
      break;
    case 6:
      puVar7 = &local_118;
      ppuVar10 = &local_a0;
      uVar9 = local_148;
      goto LAB_140c69d0a;
    case 0xf:
      iVar4 = (int)((ulonglong)local_148 >> 0x20);
      if ((iVar4 == 0x1000000) || (iVar4 == 0x4000001)) goto switchD_140c69985_caseD_0;
    }
    puVar7 = &local_118;
    ppuVar10 = &local_a0;
    goto LAB_140c69d0a;
  }
  local_f8 = 0xec;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_148,uVar11,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_141a55540,0x80000000,&local_98,uVar11,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_148,uVar11,uVar12);
  FUN_140e87440(&local_148,DAT_1419f5df8,0x80000000,&local_68,uVar11 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  uStack_12c = DAT_141ddaa34;
  uStack_130 = DAT_141ddaa30;
  if ((1 << ((byte)DAT_141ddaa34 & 0x1f) & 0x46U) == 0) {
    local_138 = DAT_141ddaa28;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141ddaa28);
  }
  switch(local_13c) {
  default:
switchD_140c69b24_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_148;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140c69b24_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_148);
    uVar6 = FUN_140e87250(uVar5);
  }
  uVar6 = FUN_140e63610(uVar6,param_2,&local_118,0,&local_68,0);
  iVar4 = FUN_140e851f0(uVar6,&local_138,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_6c = DAT_141dda9e4;
    uStack_70 = DAT_141dda9e0;
    if ((1 << ((byte)DAT_141dda9e4 & 0x1f) & 0x46U) == 0) {
      local_78 = DAT_141dda9d8;
    }
    else {
      FUN_1400419b0(&local_78,&DAT_141dda9d8);
    }
    bVar2 = true;
    bVar1 = false;
    puVar7 = &local_78;
  }
  else {
    local_7c = DAT_141ddaa34;
    local_80 = DAT_141ddaa30;
    if ((1 << ((byte)DAT_141ddaa34 & 0x1f) & 0x46U) == 0) {
      local_88 = DAT_141ddaa28;
    }
    else {
      FUN_1400419b0(&local_88,&DAT_141ddaa28);
    }
    puVar7 = &local_88;
  }
  local_58 = *(undefined4 *)puVar7;
  uStack_54 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_50 = *(undefined4 *)(puVar7 + 1);
  uStack_4c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f0);
  }
  FUN_140041b80(local_f0,&local_58);
  if ((bVar1) && ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_88);
  }
  if ((bVar2) && ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_b0 = local_f0;
  switch(local_13c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140c69ccd_caseD_0:
    uVar5 = FUN_140e4a8b0(&local_148);
    uVar9 = FUN_140e87250(uVar5);
    break;
  case 6:
    uVar9 = local_148;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar4 == 0x1000000) || (iVar4 == 0x4000001)) goto switchD_140c69ccd_caseD_0;
  }
  puVar7 = &local_128;
  ppuVar10 = &local_b0;
LAB_140c69d0a:
  FUN_140e63610(uVar9,param_2,puVar7,1,&local_98,ppuVar10);
  local_f8 = 0xee;
LAB_140c69d2d:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = 0x3ff0000000000000;
LAB_140c69d58:
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_f0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

