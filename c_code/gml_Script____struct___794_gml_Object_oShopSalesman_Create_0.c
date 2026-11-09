// gml_Script____struct___794_gml_Object_oShopSalesman_Create_0 @ 0x140d7d090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___794_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  undefined1 **ppuVar12;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_b8 = "gml_Script_anon@2602@___struct___794@gml_Object_oShopSalesman_Create_0";
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  local_b0 = 0x7c;
  _eh_vector_constructor_iterator_(&local_108,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_2c = 0xffffff;
  local_38 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_14c = 0;
  local_158 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b0 = 0x7d;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff7c8);
  uVar10 = 0;
  FUN_140e63610(param_1,param_2,&local_158,0,uVar7,0);
  local_b0 = 0x7f;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_1419ff728,0x80000000,&local_38,uVar7,uVar10);
  cVar3 = FUN_140e491e0(&local_38);
  if (cVar3 != '\0') {
    local_b0 = 0x8c;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uVar5 = (undefined4)(uVar7 >> 0x20);
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7008);
    if (puVar9 != &local_108) {
      local_138 = (undefined8 *)*puVar9;
      uStack_130 = (char *)puVar9[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    local_d8 = &local_108;
    ppuVar11 = &local_d8;
    uVar7 = CONCAT44(uVar5,DAT_141a02ef8);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar7,ppuVar11);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 != '\0') goto LAB_140d7dc6b;
    local_b0 = 0x8d;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar8,DAT_141a55540,0x80000000,&local_58,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    local_138 = (undefined8 *)CONCAT44(uRam0000000141ddb7ac,_DAT_141ddb7a8);
    uStack_130 = (char *)CONCAT44(DAT_141ddb7b4,uRam0000000141ddb7b0);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_d0 = local_f8;
    uVar8 = FUN_140069500(uVar8);
    ppuVar12 = &local_d0;
    puVar9 = &local_58;
    FUN_140e63610(uVar8,param_2,&local_a8,1,puVar9,ppuVar12);
    local_b0 = 0x8e;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_13c = 0xf;
    local_148 = 0x1000000000000ee;
    uVar10 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar7 = (ulonglong)puVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_148,DAT_1419f5868,0x80000000,&local_118,uVar7,uVar10);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e87440(&local_118,DAT_141a55540,0x80000000,&local_68,uVar7 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    local_138 = (undefined8 *)CONCAT44(uRam0000000141ddb7ac,_DAT_141ddb7a8);
    uStack_130 = (char *)CONCAT44(DAT_141ddb7b4,uRam0000000141ddb7b0);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_d8 = &local_108;
    uVar8 = 0;
    switch(local_10c) {
    case 0:
    case 7:
    case 10:
    case 0xd:
switchD_140d7dbbb_caseD_0:
      uVar5 = FUN_140e4a8b0(&local_118);
      uVar8 = FUN_140e87250(uVar5);
      break;
    case 6:
      uVar8 = local_118;
      break;
    case 0xf:
      iVar4 = (int)((ulonglong)local_118 >> 0x20);
      if ((iVar4 == 0x1000000) || (iVar4 == 0x4000001)) goto switchD_140d7dbbb_caseD_0;
    }
    FUN_140e63610(uVar8,param_2,&local_158,1,&local_68,&local_d8);
    local_b0 = 0x8f;
    uStack_13c = 0xd;
    local_148 = 0x3ff0000000000000;
    if (&local_148 != puVar6) {
      local_138 = (undefined8 *)0x3ff0000000000000;
      uStack_130 = (char *)CONCAT44(0xd,uStack_140);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_138);
    }
    goto LAB_140d7dc6b;
  }
  local_b0 = 0x80;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uStack_13c = 0xf;
  local_148 = 0x1000000000000ee;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_1419f5868,0x80000000,&local_118,uVar7,uVar10);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e87440(&local_118,DAT_1419f5848,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_148 = CONCAT44(uRam0000000141ddb70c,_DAT_141ddb708);
  uStack_140 = uRam0000000141ddb710;
  uStack_13c = DAT_141ddb714;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_d8 = &local_108;
  switch(local_10c) {
  default:
switchD_140d7d317_caseD_1:
    uVar8 = 0;
    break;
  case 6:
    uVar8 = local_118;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140d7d317_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_118);
    uVar8 = FUN_140e87250(uVar5);
  }
  uVar8 = FUN_140e63610(uVar8,param_2,&local_158,1,&local_48,&local_d8);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    local_b0 = 0x81;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    local_148 = 0x3ff0000000000000;
    uStack_13c = 0xd;
    local_88 = 0x3ff0000000000000;
    uStack_80 = uStack_140;
    uStack_7c = 0xd;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_88);
    FUN_140e87930(uVar8,DAT_1419ff728,0x80000000,&local_78);
    local_b0 = 0x83;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = CONCAT44(uRam0000000141ddb78c,_DAT_141ddb788);
    uStack_140 = uRam0000000141ddb790;
    uStack_13c = DAT_141ddb794;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_d8 = &local_108;
    local_148 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_140 = uRam00000001419df7a8;
    uStack_13c = uRam00000001419df7ac;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_d0 = local_f8;
    bVar2 = false;
    bVar1 = true;
    puVar6 = (undefined8 *)gml_Script____struct___106(param_1,param_2,&local_158,2,&local_d8);
    if (puVar6 != &local_98) {
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_148);
    }
    local_b0 = 0x84;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7008);
    cVar3 = FUN_140e491e0(&local_98);
    if (cVar3 == '\0') {
      uStack_7c = DAT_141ddb774;
      uStack_80 = DAT_141ddb770;
      if ((1 << ((byte)DAT_141ddb774 & 0x1f) & 0x46U) == 0) {
        local_88 = DAT_141ddb768;
      }
      else {
        FUN_1400419b0(&local_88,&DAT_141ddb768);
      }
      puVar9 = &local_88;
    }
    else {
      uStack_13c = DAT_141ddb7a4;
      uStack_140 = DAT_141ddb7a0;
      if ((1 << ((byte)DAT_141ddb7a4 & 0x1f) & 0x46U) == 0) {
        local_148 = DAT_141ddb798;
      }
      else {
        FUN_1400419b0(&local_148,&DAT_141ddb798);
      }
      bVar2 = true;
      bVar1 = false;
      puVar9 = &local_148;
    }
    local_138 = (undefined8 *)*puVar9;
    uStack_130 = (char *)puVar9[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    if ((bVar1) && ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_88);
    }
    if ((bVar2) && ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_148);
    }
    local_d8 = &local_108;
    FUN_140e609c0(param_1);
    puVar9 = (undefined8 *)gml_Script_CreateBossUi(param_1,param_2,&local_158,1,&local_d8);
    if (puVar9 != puVar6) {
      local_138 = (undefined8 *)*puVar9;
      uStack_130 = (char *)puVar9[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_138);
    }
    FUN_140e60910(1);
    local_b0 = 0x85;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_138 = (undefined8 *)CONCAT44(uRam0000000141ddb78c,_DAT_141ddb788);
    uStack_130 = (char *)CONCAT44(DAT_141ddb794,uRam0000000141ddb790);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_d8 = &local_108;
    local_138 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_130 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_d0 = local_f8;
    uStack_130 = "gml_Script_savedata_set";
    local_138 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_138;
    local_128 = 8;
    uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
    local_14c = 5;
    local_158 = 0;
    local_128 = 10;
    FUN_140e98ef0(param_1,param_2,uVar8,local_d8,local_d0);
    DAT_141dc7a50 = local_138;
    local_b0 = 0x86;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar5 = 0;
    gml_Script_settings_save(param_1,param_2,&local_158,0,0);
    local_b0 = 0x87;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_13c = 0xf;
    local_148 = 0x100000200000145;
    local_138 = (undefined8 *)0x100000200000145;
    uStack_130 = (char *)CONCAT44(0xf,uStack_140);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_d8 = &local_108;
    local_138 = (undefined8 *)CONCAT44(uRam00000001419edd04,_DAT_1419edd00);
    uStack_130 = (char *)CONCAT44(uRam00000001419edd0c,uRam00000001419edd08);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_d0 = local_f8;
    local_138 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_130 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_c8 = local_e8;
    FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar5,DAT_141a0a2e8),&local_d8);
  }
  local_b0 = 0x89;
LAB_140d7dc6b:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return param_3;
}

