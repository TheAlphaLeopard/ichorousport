// gml_Object_oDialogueBox_Draw_64 @ 0x140917220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDialogueBox_Draw_64(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  ppuVar9 = &local_78;
  local_100 = "gml_Object_oDialogueBox_Create_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_f8 = 2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = &DAT_bff0000000000000;
  local_f8 = 4;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa38);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_68);
  local_148 = local_68;
  uStack_140 = uStack_60;
  uStack_13c = uStack_5c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_88 = local_e8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar2,DAT_141a00c98);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar6,&local_88);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_120 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_128,puVar4);
  }
  uStack_13c = 0;
  local_148 = 0x3fc999999999999a;
  FUN_140042560(&local_128,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (&local_128 != puVar3) {
    local_148 = local_128;
    uStack_140 = uStack_120;
    uStack_13c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4020000000000000;
  local_f8 = 7;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efac8);
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar2,DAT_1419fd6d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,0,uVar6,0);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar4 != puVar3) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 9;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eedb8);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_68);
  local_148 = local_68;
  uStack_140 = uStack_60;
  uStack_13c = uStack_5c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_88 = local_e8;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_88;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar2,DAT_141a00c98),ppuVar8);
  uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_120 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_128,puVar4);
  }
  uStack_13c = 0;
  local_148 = 0x3fe3333333333333;
  FUN_140042560(&local_128,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (&local_128 != puVar3) {
    local_148 = local_128;
    uStack_140 = uStack_120;
    uStack_13c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eee18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4048000000000000;
  local_f8 = 0xc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efab8);
  local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_88 = local_e8;
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)gml_Script_SpriteBroadcast(param_1,param_2,&local_138,1,&local_88);
  if (puVar4 != puVar3) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0xe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efaa8);
  FUN_140e609c0(param_1);
  uStack_13c = 0xf;
  local_148 = 0x1000001000003e6;
  if (&local_148 != puVar3) {
    local_128 = 0x1000001000003e6;
    uStack_120 = uStack_140;
    uStack_11c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_128);
  }
  FUN_140e60910(1);
  local_f8 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_f8 = 0x11;
  puVar5 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a8a8);
  if (puVar5 != &DAT_141dd84f8) {
    local_148 = CONCAT44(uRam0000000141dd84fc,_DAT_141dd84f8);
    uStack_140 = uRam0000000141dd8500;
    uStack_13c = DAT_141dd8504;
    if ((1 << ((byte)*(undefined4 *)(puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_148);
  }
  local_f8 = 0x12;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05d18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_f8 = 0x13;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa78);
  local_148 = CONCAT44(uRam0000000141dd84cc,_DAT_141dd84c8);
  uStack_140 = uRam0000000141dd84d0;
  uStack_13c = DAT_141dd84d4;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_88 = local_e8;
  local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_80 = local_d8;
  ppuVar7 = &local_88;
  puVar4 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_138,2,ppuVar7);
  if (puVar4 != &local_98) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  FUN_140e87440(&local_98,DAT_141a055b8,0x80000000,&local_38,(ulonglong)ppuVar7 & 0xffffffffffffff00
                ,(ulonglong)ppuVar8 & 0xffffffffffffff00);
  local_148 = CONCAT44(uRam0000000141dc6db4,_DAT_141dc6db0);
  uStack_140 = uRam0000000141dc6db8;
  uStack_13c = uRam0000000141dc6dbc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_78 = local_c8;
  local_148 = CONCAT44(uRam0000000141dc6db4,_DAT_141dc6db0);
  uStack_140 = uRam0000000141dc6db8;
  uStack_13c = uRam0000000141dc6dbc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_70 = local_b8;
  FUN_140e609c0(param_1);
  switch(local_8c) {
  default:
switchD_140917b92_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_98;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_98 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140917b92_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_98);
    uVar6 = FUN_140e87250(uVar2);
  }
  ppuVar8 = ppuVar9;
  puVar4 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_118,2,&local_38,ppuVar9);
  if (puVar4 != puVar3) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x14;
  puVar5 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa48);
  if (puVar5 != &DAT_141dd84d8) {
    local_148 = CONCAT44(uRam0000000141dd84dc,_DAT_141dd84d8);
    uStack_140 = uRam0000000141dd84e0;
    uStack_13c = DAT_141dd84e4;
    if ((1 << ((byte)*(undefined4 *)(puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_148);
  }
  local_f8 = 0x16;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa98);
  local_148 = CONCAT44(uRam0000000141dd84ec,_DAT_141dd84e8);
  uStack_140 = uRam0000000141dd84f0;
  uStack_13c = DAT_141dd84f4;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_88 = local_e8;
  local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_80 = local_d8;
  ppuVar7 = &local_88;
  puVar4 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_138,2,ppuVar7);
  if (puVar4 != &local_a8) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_148);
  }
  FUN_140e87440(&local_a8,DAT_141a055b8,0x80000000,&local_48,(ulonglong)ppuVar7 & 0xffffffffffffff00
                ,(ulonglong)ppuVar8 & 0xffffffffffffff00);
  local_148 = CONCAT44(uRam00000001419ea184,_DAT_1419ea180);
  uStack_140 = uRam00000001419ea188;
  uStack_13c = uRam00000001419ea18c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_148);
  local_78 = local_c8;
  local_148 = CONCAT44(uRam00000001419ea184,_DAT_1419ea180);
  uStack_140 = uRam00000001419ea188;
  uStack_13c = uRam00000001419ea18c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_148);
  local_70 = local_b8;
  FUN_140e609c0(param_1);
  switch(local_9c) {
  default:
switchD_140917e60_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_a8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_a8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140917e60_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_a8);
    uVar6 = FUN_140e87250(uVar2);
  }
  puVar4 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_118,2,&local_48,ppuVar9);
  if (puVar4 != puVar3) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x17;
  puVar5 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa58);
  if (puVar5 != &DAT_141dd84d8) {
    local_148 = CONCAT44(uRam0000000141dd84dc,_DAT_141dd84d8);
    uStack_140 = uRam0000000141dd84e0;
    uStack_13c = DAT_141dd84e4;
    if ((1 << ((byte)*(undefined4 *)(puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_148);
  }
  local_f8 = 0x19;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57930);
  local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_88 = local_e8;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_88;
  puVar4 = (undefined8 *)gml_Script_scribble_typists_add_event(param_1,param_2,&local_138,1,ppuVar8)
  ;
  if (puVar4 != puVar3) {
    local_148 = *puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x1a;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57930);
  FUN_140e87440(uVar6,DAT_141a07848,0x80000000,&local_58,(ulonglong)ppuVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_148 = CONCAT44(uRam00000001419ea174,_DAT_1419ea170);
  uStack_140 = uRam00000001419ea178;
  uStack_13c = uRam00000001419ea17c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_88 = local_e8;
  local_148 = CONCAT44(uRam0000000141dc6db4,_DAT_141dc6db0);
  uStack_140 = uRam0000000141dc6db8;
  uStack_13c = uRam0000000141dc6dbc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_148);
  local_80 = local_d8;
  uVar6 = FUN_140069500(uVar6);
  FUN_140e63610(uVar6,param_2,&local_138,2,&local_58,&local_88);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

