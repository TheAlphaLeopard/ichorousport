// gml_Script____struct___674_gml_Object_oPlayer_Create_0 @ 0x140c25330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___674_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  bool bVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  ulonglong in_stack_fffffffffffffe40;
  ulonglong uVar12;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined1 local_170 [12];
  byte local_164;
  undefined1 local_160 [12];
  byte local_154;
  undefined1 local_150 [12];
  byte local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong *local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  
  local_180 = "gml_Script_anon@37698@___struct___674@gml_Object_oPlayer_Create_0";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x7b8;
  _eh_vector_constructor_iterator_(local_170,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_124 = 0;
  local_130 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x7ba;
  uStack_18c = 0xf;
  local_198 = 0x1000001000003f2;
  local_1a8 = (longlong *)0x1000001000003f2;
  uStack_1a0 = uStack_190;
  uStack_19c = 0xf;
  if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_170);
  }
  FUN_140041b80(local_170,&local_1a8);
  local_f8 = local_170;
  local_198 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_190 = DAT_1419df7b8;
  uStack_18c = DAT_1419df7bc;
  if ((1 << (local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_160);
  }
  FUN_140041b80(local_160,&local_198);
  local_f0 = local_160;
  ppuVar10 = &local_f8;
  bVar1 = false;
  bVar9 = true;
  uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_1b8,2,ppuVar10);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    local_178 = 0x7bc;
    uStack_18c = 0xf;
    local_198 = 0x1000001000003f1;
    local_1a8 = (longlong *)0x1000001000003f1;
    uStack_1a0 = uStack_190;
    uStack_19c = 0xf;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_1a8);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b0);
    local_178 = 0x7bd;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b98);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_178 = 0x7bf;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_120,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00,
                    in_stack_fffffffffffffe40 & 0xffffffffffffff00);
      local_198 = CONCAT44(uRam0000000141dda78c,_DAT_141dda788);
      uStack_190 = uRam0000000141dda790;
      uStack_18c = DAT_141dda794;
      if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_170);
      }
      FUN_140041b80(local_170,&local_198);
      local_f8 = local_170;
      uVar6 = FUN_140069500(uVar6);
      FUN_140e63610(uVar6,param_2,&local_1b8,1,&local_120,&local_f8);
      local_178 = 0x7c0;
      goto LAB_140c260e0;
    }
  }
  local_178 = 0x7c5;
  uStack_19c = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a728,0x80000000,&local_50,uVar11,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x1000001000003f1;
  FUN_140e851f0(&local_50,&local_1a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_178 = 0x7cb;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x100000000000106;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_1a8,DAT_1419ffbe8,0x80000000,&local_60,uVar11,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x100000000000106;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  FUN_140e87440(&local_1a8,DAT_1419ffca8,0x80000000,&local_70,uVar11 & 0xffffffffffffff00,
                in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uVar3 = FUN_140e851f0(&local_60,&local_70,DAT_141955260,1);
  if (uVar3 < 0x80000000) {
    local_178 = 0x7cc;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8008);
    in_stack_fffffffffffffe40 = 0;
    FUN_140e63610(param_1,param_2,&local_1b8,0,uVar6,0);
  }
  local_178 = 0x7ce;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  local_198 = CONCAT44(uRam00000001419ecbd4,_DAT_1419ecbd0);
  uStack_190 = uRam00000001419ecbd8;
  uStack_18c = uRam00000001419ecbdc;
  if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_170);
  }
  FUN_140041b80(local_170,&local_198);
  local_f8 = local_170;
  local_198 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_190 = DAT_1419df7b8;
  uStack_18c = DAT_1419df7bc;
  if ((1 << (local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_160);
  }
  FUN_140041b80(local_160,&local_198);
  local_f0 = local_160;
  ppuVar10 = &local_f8;
  uVar6 = gml_Script_InputReleasedMany(param_1,param_2,&local_1b8,2,ppuVar10);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b98);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_178 = 2000;
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      local_130 = 0;
      local_128 = 0;
      local_124 = 5;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      local_140 = 0;
      local_138 = 0;
      local_134 = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
      uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_120,uVar11,in_stack_fffffffffffffe40);
      uStack_19c = 0xf;
      local_1a8 = (longlong *)0x100000000000106;
      FUN_140e87440(&local_1a8,DAT_1419f89e8,0x80000000,&local_80,uVar11 & 0xffffffffffffff00,
                    in_stack_fffffffffffffe40 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_18c = 0xf;
      local_198 = 0x100000000000106;
      uVar7 = FUN_140069500(&local_198);
      uVar7 = FUN_140e63610(uVar7,param_2,&local_140,0,&local_80,0);
      uStack_19c = 0;
      local_1a8 = (longlong *)0x3ff0000000000000;
      uVar3 = FUN_140e851f0(uVar7,&local_1a8,DAT_141955260,1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if (uVar3 < 0x80000000) {
        uStack_19c = DAT_141dda664;
        uStack_1a0 = DAT_141dda660;
        if ((1 << ((byte)DAT_141dda664 & 0x1f) & 0x46U) == 0) {
          local_1a8 = DAT_141dda658;
        }
        else {
          FUN_1400419b0(&local_1a8,&DAT_141dda658);
        }
        pplVar8 = &local_1a8;
        bVar1 = true;
        bVar9 = false;
      }
      else {
        uStack_94 = DAT_141dda824;
        uStack_98 = DAT_141dda820;
        if ((1 << ((byte)DAT_141dda824 & 0x1f) & 0x46U) == 0) {
          local_a0 = DAT_141dda818;
        }
        else {
          FUN_1400419b0(&local_a0,&DAT_141dda818);
        }
        pplVar8 = &local_a0;
      }
      local_108 = *(undefined4 *)pplVar8;
      uStack_104 = *(undefined4 *)((longlong)pplVar8 + 4);
      uStack_100 = *(undefined4 *)(pplVar8 + 1);
      uStack_fc = *(undefined4 *)((longlong)pplVar8 + 0xc);
      if ((1 << (local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_150);
      }
      FUN_140041b80(local_150,&local_108);
      if ((bVar9) && ((1 << ((byte)uStack_94 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_a0);
      }
      if ((bVar1) && ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_e8 = local_150;
      uVar6 = FUN_140069500(uVar6);
      FUN_140e63610(uVar6,param_2,&local_130,1,&local_120,&local_e8);
      local_178 = 0x7d1;
      goto LAB_140c260e0;
    }
  }
  local_178 = 0x7d4;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f8578,0x80000000,&local_c0,uVar11,in_stack_fffffffffffffe40);
  cVar2 = FUN_140e491e0(&local_c0);
  if (cVar2 == '\0') {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
    uStack_18c = 0;
    local_198 = 0;
    iVar4 = FUN_140e851f0(uVar6,&local_198,DAT_141955260,0);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (iVar4 == 0) {
      local_178 = 0x7d6;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      local_198 = 0x3ff0000000000000;
      uStack_18c = 0xd;
      local_108 = 0;
      uStack_104 = 0x3ff00000;
      uStack_100 = uStack_190;
      uStack_fc = 0xd;
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_108);
      FUN_140e87930(uVar6,DAT_1419f8578,0x80000000,&local_d0);
    }
  }
  local_178 = 0x7da;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
  uStack_18c = 0;
  local_198 = 0;
  iVar4 = FUN_140e851f0(uVar6,&local_198,DAT_141955260,0);
  bVar9 = iVar4 == 0;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (!bVar9) {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar12 = CONCAT71((int7)(in_stack_fffffffffffffe40 >> 8),bVar9);
    uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar9);
    FUN_140e87440(uVar6,DAT_1419f8578,0x80000000,&local_c0,uVar11,uVar12);
    cVar2 = FUN_140e491e0(&local_c0);
    if (cVar2 != '\0') {
      local_178 = 0x7dc;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
      FUN_140e87440(uVar6,DAT_1419f7b28,0x80000000,&local_90,uVar11 & 0xffffffffffffff00,
                    uVar12 & 0xffffffffffffff00);
      local_108 = (undefined4)DAT_141dda548;
      uStack_104 = DAT_141dda548._4_4_;
      uStack_100 = DAT_141dda550;
      uStack_fc = DAT_141dda554;
      if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_170);
      }
      FUN_140041b80(local_170,&local_108);
      local_f8 = local_170;
      uVar6 = FUN_140069500(uVar6);
      ppuVar10 = &local_f8;
      puVar5 = &local_90;
      FUN_140e63610(uVar6,param_2,&local_1b8,1,puVar5,ppuVar10);
      local_178 = 0x7dd;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_120,(ulonglong)puVar5 & 0xffffffffffffff00
                    ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
      local_108 = (undefined4)DAT_141dda548;
      uStack_104 = DAT_141dda548._4_4_;
      uStack_100 = DAT_141dda550;
      uStack_fc = DAT_141dda554;
      if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_170);
      }
      FUN_140041b80(local_170,&local_108);
      local_f8 = local_170;
      uVar6 = FUN_140069500(uVar6);
      FUN_140e63610(uVar6,param_2,&local_1b8,1,&local_120,&local_f8);
      local_178 = 0x7df;
      goto LAB_140c260e0;
    }
  }
  local_178 = 0x7e2;
  if (puVar5 != &local_e0) {
    local_108 = *(undefined4 *)puVar5;
    uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_108);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e0);
  local_178 = 0x7e4;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_1b8,0,uVar6,0);
  local_178 = 0x7e5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_1b8,0,uVar6,0);
LAB_140c260e0:
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
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
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(local_170,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

