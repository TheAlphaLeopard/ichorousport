// gml_Script____struct___162____struct___161_settings_setup_PauseMenuFunctions @ 0x14041c5f0

undefined8 *
gml_Script____struct___162____struct___161_settings_setup_PauseMenuFunctions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_b0 = "gml_Script_GameUnpause";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x5a;
  FUN_140041df0(local_58,param_4,1,param_5);
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_60 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_fc = 0xffffff;
  local_108 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x5a;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_50;
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0x5a;
    uStack_10c = 0xf;
    local_118 = 0x1000000000000f0;
    if ((int)local_58[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_50;
      if (&local_118 == puVar7) goto LAB_14041c7b4;
    }
    local_c8 = 0xf0;
    uStack_c4 = 0x1000000;
    uStack_c0 = uStack_110;
    uStack_bc = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
LAB_14041c7b4:
  local_a8 = 0x5b;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((int)local_58[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14041c7ff:
    local_c8 = *(undefined4 *)puVar7;
    uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_c8);
  }
  else {
    puVar7 = (undefined8 *)*local_50;
    if (puVar7 != &local_a0) goto LAB_14041c7ff;
  }
  local_80 = &local_a0;
  uVar10 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar10,&local_80);
  uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') goto LAB_14041cb68;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_10c = 0xf;
  local_118 = 0x1000000000000c0;
  local_c8 = 0xc0;
  uStack_c4 = 0x1000000;
  uStack_c0 = uStack_110;
  uStack_bc = 0xf;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_c8);
  local_78 = local_90;
  ppuVar12 = &local_78;
  uVar11 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar11,ppuVar12);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') goto LAB_14041cb68;
  local_a8 = 0x5c;
  uStack_10c = 0xf;
  local_118 = 0x1000000000000f0;
  if ((int)local_58[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_50;
  }
  iVar2 = FUN_140e851f0(puVar7,&local_118,DAT_141955260,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar2 == 0) {
    local_a8 = 0x5c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(local_60,DAT_1419ef338,0x80000000,&local_108,uVar11,uVar13);
    FUN_140e87440(&local_108,DAT_1419f4a98,0x80000000,&local_70,uVar11 & 0xffffffffffffff00,
                  uVar13 & 0xffffffffffffff00);
    switch(local_fc) {
    default:
switchD_14041ca24_caseD_1:
      uVar6 = 0;
      break;
    case 6:
      uVar6 = local_108;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_108 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14041ca24_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_108);
      uVar6 = FUN_140e87250(uVar3);
    }
    FUN_140e63610(uVar6,param_2,&local_f8,0,&local_70,0);
  }
  local_a8 = 0x5d;
  if (((int)local_58[0] < 1) || (puVar9 = (undefined8 *)*local_50, puVar9 != &local_a0)) {
    local_c8 = *(undefined4 *)puVar9;
    uStack_c4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_c0 = *(undefined4 *)(puVar9 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_c8);
  }
  local_80 = &local_a0;
  FUN_140edd0e0(param_1,param_2,1,&local_80);
  local_a8 = 0x5e;
  uStack_10c = 0xd;
  local_118 = 0;
  if (&local_118 != puVar4) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_110;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  local_a8 = 0x5f;
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff0000000000000;
LAB_14041cb68:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,2,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar9 = local_50;
    do {
      puVar4 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

