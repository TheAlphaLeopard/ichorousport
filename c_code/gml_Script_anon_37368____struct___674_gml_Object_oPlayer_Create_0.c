// gml_Script_anon_37368____struct___674_gml_Object_oPlayer_Create_0 @ 0x140c23d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_37368____struct___674_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  uint local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  ulonglong local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_b8 = "gml_Script_anon@37038@___struct___673@gml_Object_oPlayer_Create_0";
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  local_b0 = 0x78d;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_138,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b0 = 0x78f;
  uStack_15c = 0xf;
  local_168 = (longlong *)0x100000000000148;
  local_98 = (longlong *)0x100000000000148;
  uStack_90 = uStack_160;
  uStack_8c = 0xf;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_98);
  local_d8 = local_138;
  ppuVar14 = &local_d8;
  uVar10 = CONCAT44(uVar4,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar10,ppuVar14);
  cVar2 = FUN_140e491e0(uVar6);
  bVar12 = cVar2 == '\0';
  if (bVar12) {
    uStack_8c = 0;
    local_98 = (longlong *)0x4010000000000000;
    pplVar7 = &local_98;
  }
  else {
    uStack_15c = 0;
    local_168 = (longlong *)0x408f400000000000;
    pplVar7 = &local_168;
  }
  uVar1 = uStack_8c;
  uVar4 = uStack_15c;
  local_158 = *(undefined4 *)pplVar7;
  uStack_154 = *(undefined4 *)((longlong)pplVar7 + 4);
  uStack_150 = *(undefined4 *)(pplVar7 + 1);
  uStack_14c = *(undefined4 *)((longlong)pplVar7 + 0xc);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_158);
  if ((bVar12) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_98);
  }
  if ((!bVar12) && ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_168);
  }
  local_b0 = 0x790;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  ppuVar14 = (undefined1 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419ef328,0x80000000,&local_48,uVar10,ppuVar14);
  iVar3 = FUN_140e851f0(&local_48,&local_a8,DAT_141955260,1);
  if (iVar3 == -2) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulonglong)(-1 < iVar3);
  }
  if ((char)uVar8 != '\0') {
    local_b0 = 0x792;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uStack_15c = 6;
    uVar8 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_58,uVar10,uVar8);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_15c = 6;
    uVar10 = uVar10 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_68,uVar10,uVar8 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar10 >> 0x20);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_158 = (undefined4)local_58;
    uStack_154 = local_58._4_4_;
    uStack_150 = uStack_50;
    uStack_14c = uStack_4c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_158);
    local_d8 = local_138;
    local_158 = (undefined4)local_68;
    uStack_154 = local_68._4_4_;
    uStack_150 = uStack_60;
    uStack_14c = uStack_5c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_158);
    local_d0 = local_128;
    uStack_15c = 0xf;
    local_168 = (longlong *)0x1000000000000d5;
    local_158 = 0xd5;
    uStack_154 = 0x1000000;
    uStack_150 = uStack_160;
    uStack_14c = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_158);
    local_c8 = local_118;
    ppuVar14 = &local_d8;
    uVar10 = CONCAT44(uVar4,DAT_141a124c8);
    puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,3,uVar10,ppuVar14);
    if (puVar9 != &local_e8) {
      local_158 = *(undefined4 *)puVar9;
      uStack_154 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_150 = *(undefined4 *)(puVar9 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_158);
    }
    local_b0 = 0x793;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar8 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_e8,DAT_1419f5868,0x80000000,&local_108,uVar10,uVar8);
    FUN_140e87440(&local_108,DAT_141a55540,0x80000000,&local_78,uVar10 & 0xffffffffffffff00,
                  uVar8 & 0xffffffffffffff00);
    local_158 = _DAT_141dda718;
    uStack_154 = uRam0000000141dda71c;
    uStack_150 = uRam0000000141dda720;
    uStack_14c = DAT_141dda724;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_158);
    local_d8 = local_138;
    switch(local_fc) {
    default:
switchD_140c242dc_caseD_1:
      uVar10 = 0;
      break;
    case 6:
      uVar10 = local_108;
      break;
    case 0xf:
      iVar3 = (int)(local_108 >> 0x20);
      if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140c242dc_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar4 = FUN_140e4a8b0(&local_108);
      uVar10 = FUN_140e87250(uVar4);
    }
    ppuVar14 = &local_d8;
    puVar9 = &local_78;
    FUN_140e63610(uVar10,param_2,&local_178,1,puVar9,ppuVar14);
    local_b0 = 0x794;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_88,(ulonglong)puVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar14 & 0xffffffffffffff00);
    local_158 = (undefined4)DAT_141dda818;
    uStack_154 = DAT_141dda818._4_4_;
    uStack_150 = DAT_141dda820;
    uStack_14c = DAT_141dda824;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_158);
    local_d8 = local_138;
    uVar6 = FUN_140069500(uVar6);
    ppuVar14 = &local_d8;
    FUN_140e63610(uVar6,param_2,&local_178,1,&local_88,ppuVar14);
  }
  local_b0 = 0x798;
  if (puVar5 != &local_f8) {
    local_158 = *(undefined4 *)puVar5;
    uStack_154 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_f8);
  local_b0 = 0x79a;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_158 = (undefined4)DAT_1419df7b0;
  uStack_154 = DAT_1419df7b0._4_4_;
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_158);
  local_d8 = local_138;
  local_158 = (undefined4)DAT_1419df7b0;
  uStack_154 = DAT_1419df7b0._4_4_;
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_158);
  local_d0 = local_128;
  ppuVar13 = &local_d8;
  uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_178,2,ppuVar13);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') goto LAB_140c245e3;
  local_b0 = 0x79c;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar6,DAT_1419ef328,0x80000000,&local_148,(ulonglong)ppuVar13 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar11 = local_13c & 0xffffff;
  if (uVar11 == 0) {
LAB_140c245bb:
    local_148 = local_148 + 1.0;
  }
  else {
    if (uVar11 == 1) {
      local_148 = (double)FUN_140e4b060(&local_148);
      local_13c = 0;
      goto LAB_140c245bb;
    }
    if (uVar11 == 7) {
      local_148 = (double)CONCAT44(local_148._4_4_,local_148._0_4_ + 1);
    }
    else if (uVar11 == 10) {
      local_148 = (double)((longlong)local_148 + 1);
    }
    else {
      if (uVar11 == 0xd) {
        local_13c = 0;
        goto LAB_140c245bb;
      }
      FUN_140042910(&DAT_14172c3d8,&local_148,&local_148);
    }
  }
  FUN_140e87930(uVar6,DAT_1419ef328,0x80000000,&local_148);
LAB_140c245e3:
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return param_3;
}

