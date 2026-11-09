// gml_Script____struct___679_gml_Object_oPlayer_Create_0 @ 0x140c32480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___679_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  code *pcVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  ulonglong in_stack_fffffffffffffe10;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  longlong local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_174;
  longlong local_170;
  undefined4 local_168;
  uint local_164;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  longlong local_130;
  undefined4 local_128;
  uint local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f4;
  longlong local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_1b0 = "gml_Script_anon@45277@___struct___679@gml_Object_oPlayer_Create_0";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x951;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_e0,0x10,2,FUN_1400424d0,FUN_140041b30);
  plVar6 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uVar12 = 0xffffff;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x953;
  if (plVar6 != &local_f0) {
    local_1e8 = *plVar6;
    uStack_1e0 = (undefined4)plVar6[1];
    uStack_1dc = *(undefined4 *)((longlong)plVar6 + 0xc);
    FUN_140041b80(&local_f0,&local_1e8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_f0);
  local_1a8 = 0x955;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_1419f86a8,0x80000000,&local_68,uVar15,in_stack_fffffffffffffe10);
  cVar2 = FUN_140e491e0(&local_68);
  if (cVar2 == '\0') {
    local_1a8 = 0x956;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419f81f8,0x80000000,&local_160,uVar15,in_stack_fffffffffffffe10);
    uStack_1bc = local_154;
    uStack_1c0 = local_158;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_160;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_160);
    }
    uVar4 = uStack_1bc;
    local_1e8 = local_1c8;
    uStack_1e0 = uStack_1c0;
    uStack_1dc = uStack_1bc;
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_1e8);
    if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    FUN_140e87930(&local_1e8,DAT_1419fefe8,0x80000000,&local_120);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
  }
  local_1a8 = 0x958;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_1419f7ba8,0x80000000,&local_78,uVar15,in_stack_fffffffffffffe10);
  uStack_1dc = 0;
  local_1e8 = 0x3ff0000000000000;
  iVar3 = FUN_140e851f0(&local_78,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar3) {
    local_1a8 = 0x95a;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
    uVar7 = FUN_140e78f40(0xffffffffffffffff,1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = uVar7;
    local_1a8 = 0x95b;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5d8);
    uVar7 = FUN_140e78f40(0xffffffffffffffff,1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = uVar7;
    local_1a8 = 0x95c;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    local_194 = 0;
    local_1a0 = 0;
    FUN_140e87930(uVar7,DAT_1419f7ba8,0x80000000,&local_1a0);
  }
  local_1a8 = 0x95f;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_141a0a848,0x80000000,&local_88,uVar15,in_stack_fffffffffffffe10);
  ppuVar17 = (undefined8 **)(in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  ppuVar16 = (undefined8 **)(uVar15 & 0xffffffffffffff00);
  FUN_140e87440(uVar7,DAT_1419f1988,0x80000000,&local_170,ppuVar16,ppuVar17);
  uStack_1bc = local_164;
  uStack_1c0 = local_168;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_170;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_170);
  }
  uStack_1dc = 0;
  local_1e8 = 0x3fe8000000000000;
  FUN_140042560(&local_1c8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar4 = FUN_140e851f0(&local_88,&local_1c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (0x7fffffff < uVar4) goto LAB_140c32f23;
  local_1a8 = 0x961;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_1419f5a38,0x80000000,&local_98,uVar15,uVar18);
  local_1e8 = local_98;
  uStack_1e0 = uStack_90;
  uStack_1dc = uStack_8c;
  FUN_140041b80(&local_130,&local_1e8);
  uVar12 = local_124;
  if ((local_124 & 0xffffff) == 3) {
    bVar13 = local_130 == 0;
  }
  else {
    bVar13 = (local_124 & 0xffffff) == 5;
  }
  if (bVar13) {
    uStack_1dc = DAT_141dda674;
    uStack_1e0 = DAT_141dda670;
    if ((1 << ((byte)DAT_141dda674 & 0x1f) & 0x46U) == 0) {
      local_1e8 = CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
    }
    else {
      FUN_1400419b0(&local_1e8,&DAT_141dda668);
    }
    plVar9 = &local_1e8;
    bVar1 = true;
    bVar13 = false;
  }
  else {
    uStack_1bc = local_124;
    uStack_1c0 = local_128;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_130;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_130);
    }
    plVar9 = &local_1c8;
    bVar1 = false;
    bVar13 = true;
  }
  local_190 = (undefined4)*plVar9;
  uStack_18c = *(undefined4 *)((longlong)plVar9 + 4);
  uStack_188 = (undefined4)plVar9[1];
  uStack_184 = *(undefined4 *)((longlong)plVar9 + 0xc);
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_190);
  if ((bVar13) && ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1c8);
  }
  if ((bVar1) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  local_1a8 = 0x963;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_1419f5868,0x80000000,&local_180,uVar15,uVar18);
  FUN_140e87440(&local_180,DAT_141a55540,0x80000000,&local_b0,uVar15 & 0xffffffffffffff00,
                uVar18 & 0xffffffffffffff00);
  local_110 = &local_140;
  switch(local_174) {
  default:
switchD_140c32c6a_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_180;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_180 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140c32c6a_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_180);
    uVar7 = FUN_140e87250(uVar5);
  }
  ppuVar17 = &local_110;
  puVar8 = &local_b0;
  FUN_140e63610(uVar7,param_2,&local_1d8,1,puVar8,ppuVar17);
  local_1a8 = 0x964;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar7,DAT_141a55540,0x80000000,&local_c0,(ulonglong)puVar8 & 0xffffffffffffff00,
                (ulonglong)ppuVar17 & 0xffffffffffffff00);
  local_190 = (undefined4)DAT_141dda668;
  uStack_18c = DAT_141dda668._4_4_;
  uStack_188 = DAT_141dda670;
  uStack_184 = DAT_141dda674;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_190);
  local_110 = &local_e0;
  uVar7 = FUN_140069500(uVar7);
  ppuVar17 = &local_110;
  FUN_140e63610(uVar7,param_2,&local_1d8,1,&local_c0,ppuVar17);
  local_1a8 = 0x966;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  local_190 = (undefined4)DAT_1419df7b0;
  uStack_18c = DAT_1419df7b0._4_4_;
  uStack_188 = DAT_1419df7b8;
  uStack_184 = DAT_1419df7bc;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  FUN_140041b80(&local_150,&local_190);
  FUN_140e87930(uVar7,DAT_1419f5a38,0x80000000,&local_150);
  local_1a8 = 0x96a;
  puVar10 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8a48);
  puVar11 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffbb8);
  FUN_140e609c0(param_1);
  if (puVar10 != puVar11) {
    local_190 = *puVar10;
    uStack_18c = puVar10[1];
    uStack_188 = puVar10[2];
    uStack_184 = puVar10[3];
    if ((1 << ((byte)puVar11[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_190);
  }
  FUN_140e60910(1);
  local_1a8 = 0x96b;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  local_190 = _DAT_1419ecdb0;
  uStack_18c = uRam00000001419ecdb4;
  uStack_188 = uRam00000001419ecdb8;
  uStack_184 = uRam00000001419ecdbc;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_190);
  local_110 = &local_e0;
  local_190 = _DAT_1419ecdb0;
  uStack_18c = uRam00000001419ecdb4;
  uStack_188 = uRam00000001419ecdb8;
  uStack_184 = uRam00000001419ecdbc;
  if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d0);
  }
  FUN_140041b80(local_d0,&local_190);
  local_108 = local_d0;
  ppuVar16 = &local_110;
  gml_Script_IK_documentation(param_1,param_2,&local_1d8,2,ppuVar16);
LAB_140c32f23:
  local_1a8 = 0x96e;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_1419f7ba8,0x80000000,&local_1a0,uVar15,uVar18);
  FUN_1400460e0(&local_1a0,plVar6);
  FUN_140e87930(uVar7,DAT_1419f7ba8,0x80000000,&local_1a0);
  local_1a8 = 0x96f;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar7,DAT_141a0a848,0x80000000,&local_100,uVar15 & 0xffffffffffffff00,
                uVar18 & 0xffffffffffffff00);
  FUN_1400460e0(&local_100,plVar6);
  FUN_140e87930(uVar7,DAT_141a0a848,0x80000000,&local_100);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(&local_e0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

