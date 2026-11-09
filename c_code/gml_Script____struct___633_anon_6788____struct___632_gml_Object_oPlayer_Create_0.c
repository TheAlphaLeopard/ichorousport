// gml_Script____struct___633_anon_6788____struct___632_gml_Object_oPlayer_Create_0 @ 0x140bf2310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___633_anon_6788____struct___632_gml_Object_oPlayer_Create_0
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
  undefined8 **ppuVar10;
  ulonglong in_stack_fffffffffffffe50;
  ulonglong uVar11;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  byte local_b4;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_130 = "gml_Script_anon@6208@___struct___631@gml_Object_oPlayer_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x165;
  _eh_vector_constructor_iterator_(&local_c0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x166;
  local_168 = CONCAT44(uRam00000001419ecca4,_DAT_1419ecca0);
  uStack_160 = uRam00000001419ecca8;
  uStack_15c = uRam00000001419eccac;
  if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_168);
  local_d0 = &local_c0;
  local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_160 = DAT_1419df7b8;
  uStack_15c = DAT_1419df7bc;
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b0);
  }
  FUN_140041b80(local_b0,&local_168);
  local_c8 = local_b0;
  ppuVar10 = &local_d0;
  uVar6 = gml_Script_InputPressedMany(param_1,param_2,&local_1a8,2,ppuVar10);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_128 = 0x167;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b08);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5e48);
    FUN_140e609c0(param_1);
    if (puVar7 != puVar8) {
      local_168 = *puVar7;
      uStack_160 = *(undefined4 *)(puVar7 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_168);
    }
    FUN_140e60910(1);
  }
  local_128 = 0x169;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f7c18,0x80000000,&local_198,uVar9,in_stack_fffffffffffffe50);
  FUN_140e87440(&local_198,DAT_141a0a968,0x80000000,&local_50,uVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  switch(local_18c) {
  default:
switchD_140bf2616_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_198;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_198 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140bf2616_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_198);
    uVar6 = FUN_140e87250(uVar5);
  }
  uVar11 = 0;
  puVar7 = &local_50;
  FUN_140e63610(uVar6,param_2,&local_1a8,0,puVar7,0);
  local_128 = 0x16a;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f7c18,0x80000000,&local_198,uVar9,uVar11);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_141a0a9f8,0x80000000,&local_100,uVar9,uVar11);
  uStack_16c = local_f4;
  uStack_170 = local_f8;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
    local_178 = local_100;
  }
  else {
    FUN_1400419b0(&local_178,&local_100);
  }
  uVar5 = uStack_16c;
  local_168 = local_178;
  uStack_160 = uStack_170;
  uStack_15c = uStack_16c;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_168);
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86c30(uVar6,DAT_141a0a728,0x80000000,&local_e0);
  local_128 = 0x16b;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f7c18,0x80000000,&local_198,uVar9,uVar11);
  FUN_140e87440(&local_198,DAT_141a0aa98,0x80000000,&local_110,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uStack_16c = local_104;
  uStack_170 = local_108;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
    local_178 = local_110;
  }
  else {
    FUN_1400419b0(&local_178,&local_110);
  }
  uVar5 = uStack_16c;
  local_168 = local_178;
  uStack_160 = uStack_170;
  uStack_15c = uStack_16c;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_168);
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86c30(uVar6,DAT_141a0cfc8,0x80000000,&local_f0);
  local_128 = 0x16c;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar7 != &local_120) {
    local_168 = *puVar7;
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_168);
  }
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87930(uVar6,DAT_1419f5ef8,0x80000000,&local_120);
  local_128 = 0x16d;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7f48);
  uVar11 = 0;
  FUN_140e63610(param_1,param_2,&local_1a8,0,uVar9,0);
  local_128 = 0x170;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f7c18,0x80000000,&local_198,uVar9,uVar11);
  FUN_140e87440(&local_198,DAT_141a0aa58,0x80000000,&local_60,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  switch(local_18c) {
  default:
switchD_140bf29d4_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_198;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_198 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140bf29d4_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_198);
    uVar6 = FUN_140e87250(uVar5);
  }
  uVar6 = FUN_140e63610(uVar6,param_2,&local_1a8,0,&local_60,0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') goto LAB_140bf2f60;
  local_128 = 0x172;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
  uVar11 = 0;
  uVar6 = FUN_140e63610(param_1,param_2,&local_188,0,uVar9,0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_128 = 0x173;
    goto LAB_140bf2f60;
  }
  local_128 = 0x175;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f7c18,0x80000000,&local_198,uVar9,uVar11);
  FUN_140e87440(&local_198,DAT_141a0aab8,0x80000000,&local_70,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  switch(local_18c) {
  default:
switchD_140bf2b4b_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_198;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_198 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140bf2b4b_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_198);
    uVar6 = FUN_140e87250(uVar5);
  }
  uVar9 = 0;
  puVar7 = &local_70;
  uVar6 = FUN_140e63610(uVar6,param_2,&local_1a8,0,puVar7,0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') goto LAB_140bf2f60;
  local_128 = 0x177;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar6,DAT_1419f5df8,0x80000000,&local_80,(ulonglong)puVar7 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  uVar6 = FUN_140069500(uVar6);
  uVar9 = 0;
  puVar7 = &local_80;
  puVar8 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_188,0,puVar7,0);
  if (puVar8 != &local_148) {
    local_168 = *puVar8;
    uStack_160 = *(undefined4 *)(puVar8 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
  local_128 = 0x178;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar11 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_158,uVar11,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_141a55540,0x80000000,&local_90,uVar11,uVar9);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_158,uVar11,uVar9);
  FUN_140e87440(&local_158,DAT_1419f5818,0x80000000,&local_a0,uVar11 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_d0 = &local_148;
  switch(local_14c) {
  default:
switchD_140bf2d88_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_158;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140bf2d88_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_158);
    uVar6 = FUN_140e87250(uVar5);
  }
  uVar6 = FUN_140e63610(uVar6,param_2,&local_188,1,&local_a0,&local_d0);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    uStack_16c = DAT_141dda824;
    uStack_170 = DAT_141dda820;
    if ((1 << ((byte)DAT_141dda824 & 0x1f) & 0x46U) == 0) {
      local_178 = DAT_141dda818;
    }
    else {
      FUN_1400419b0(&local_178,&DAT_141dda818);
    }
    puVar7 = &local_178;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_15c = local_13c;
    uStack_160 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_168 = local_148;
    }
    else {
      FUN_1400419b0(&local_168,&local_148);
    }
    puVar7 = &local_168;
    bVar2 = true;
    bVar1 = false;
  }
  local_40 = *(undefined4 *)puVar7;
  uStack_3c = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_38 = *(undefined4 *)(puVar7 + 1);
  uStack_34 = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b0);
  }
  FUN_140041b80(local_b0,&local_40);
  if ((bVar1) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if ((bVar2) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  local_c8 = local_b0;
  uVar6 = 0;
  switch(local_14c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140bf2f09_caseD_0:
    uVar5 = FUN_140e4a8b0(&local_158);
    uVar6 = FUN_140e87250(uVar5);
    break;
  case 6:
    uVar6 = local_158;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar4 == 0x1000000) || (iVar4 == 0x4000001)) goto switchD_140bf2f09_caseD_0;
  }
  FUN_140e63610(uVar6,param_2,&local_1a8,1,&local_90,&local_c8);
LAB_140bf2f60:
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(&local_c0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

