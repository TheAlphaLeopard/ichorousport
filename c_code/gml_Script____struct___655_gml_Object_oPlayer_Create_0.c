// gml_Script____struct___655_gml_Object_oPlayer_Create_0 @ 0x140c0c3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___655_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 **ppuVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffe90;
  undefined1 **ppuVar12;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined4 local_f0 [3];
  byte local_e4;
  undefined1 local_e0 [12];
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
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
  
  local_110 = "gml_Script_anon@22643@___struct___655@gml_Object_oPlayer_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x465;
  _eh_vector_constructor_iterator_(local_f0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  pplVar5 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_15c = 0;
  local_168 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x467;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000001000003f2;
  local_148 = 0x3f2;
  uStack_144 = 0x1000001;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f0);
  }
  FUN_140041b80(local_f0,&local_148);
  local_a0 = local_f0;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_148);
  local_98 = local_e0;
  ppuVar9 = &local_a0;
  uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_168,2,ppuVar9);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_108 = 0x469;
    uStack_14c = 0xf;
    local_158 = (longlong *)0x1000001000003f1;
    local_148 = 0x3f1;
    uStack_144 = 0x1000001;
    uStack_140 = uStack_150;
    uStack_13c = 0xf;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_148);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_100);
    local_108 = 0x46a;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
  }
  local_108 = 0x46d;
  uStack_14c = 6;
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a0a728,0x80000000,&local_48,uVar10,in_stack_fffffffffffffe90);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000001000003f1;
  iVar2 = FUN_140e851f0(&local_48,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar2 != 0) goto LAB_140c0c9ca;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5528,0x80000000,&local_58,uVar10,in_stack_fffffffffffffe90);
  cVar1 = FUN_140e491e0(&local_58);
  if (cVar1 == '\0') goto LAB_140c0c9ca;
  local_108 = 0x46f;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_68,uVar10,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  local_148 = _DAT_141dc7470;
  uStack_144 = uRam0000000141dc7474;
  uStack_140 = uRam0000000141dc7478;
  uStack_13c = uRam0000000141dc747c;
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f0);
  }
  FUN_140041b80(local_f0,&local_148);
  local_a0 = local_f0;
  ppuVar9 = &local_a0;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar10,ppuVar9);
  iVar2 = FUN_140e851f0(&local_68,uVar6,DAT_141955260,1);
  if (0 < iVar2) {
    local_108 = 0x471;
    uStack_14c = 0xf;
    local_158 = (longlong *)0x100000100000408;
    local_148 = 0x408;
    uStack_144 = 0x1000001;
    uStack_140 = uStack_150;
    uStack_13c = 0xf;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_148);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_100);
    local_108 = 0x472;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
  }
  local_108 = 0x475;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_fffffffffffffe90 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_138,uVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffe90);
  uVar8 = local_12c & 0xffffff;
  if (uVar8 == 0) {
LAB_140c0c9a3:
    local_138 = local_138 + 1.0;
  }
  else {
    if (uVar8 == 1) {
      local_138 = (double)FUN_140e4b060(&local_138);
      local_12c = 0;
      goto LAB_140c0c9a3;
    }
    if (uVar8 == 7) {
      local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
    }
    else if (uVar8 == 10) {
      local_138 = (double)((longlong)local_138 + 1);
    }
    else {
      if (uVar8 == 0xd) {
        local_12c = 0;
        goto LAB_140c0c9a3;
      }
      FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
    }
  }
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_138);
LAB_140c0c9ca:
  local_108 = 0x478;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x100000100000408;
  local_148 = 0x408;
  uStack_144 = 0x1000001;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f0);
  }
  FUN_140041b80(local_f0,&local_148);
  local_a0 = local_f0;
  local_148 = (undefined4)DAT_1419df7b0;
  uStack_144 = DAT_1419df7b0._4_4_;
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_148);
  local_98 = local_e0;
  ppuVar9 = &local_a0;
  uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_168,2,ppuVar9);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_108 = 0x47a;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_78,(ulonglong)ppuVar9 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    local_148 = (undefined4)DAT_141dda818;
    uStack_144 = DAT_141dda818._4_4_;
    uStack_140 = DAT_141dda820;
    uStack_13c = DAT_141dda824;
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_148);
    local_90 = local_d0;
    uVar6 = FUN_140069500(uVar6);
    ppuVar12 = &local_90;
    puVar7 = &local_78;
    FUN_140e63610(uVar6,param_2,&local_c0,1,puVar7,ppuVar12);
    local_108 = 0x47b;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar10 = (ulonglong)puVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5b98,0x80000000,&local_88,uVar10,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar10 >> 0x20);
    if (puVar3 != local_f0) {
      local_148 = *puVar3;
      uStack_144 = puVar3[1];
      uStack_140 = puVar3[2];
      uStack_13c = puVar3[3];
      if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f0);
      }
      FUN_140041b80(local_f0,&local_148);
    }
    local_a0 = local_f0;
    local_148 = (undefined4)local_88;
    uStack_144 = local_88._4_4_;
    uStack_140 = uStack_80;
    uStack_13c = uStack_7c;
    if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e0);
    }
    FUN_140041b80(local_e0,&local_148);
    local_98 = local_e0;
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar11,DAT_141a573f0),&local_a0);
    if (puVar7 != &local_b0) {
      local_148 = *(undefined4 *)puVar7;
      uStack_144 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_140 = *(undefined4 *)(puVar7 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_148);
    }
    local_108 = 0x47c;
    uStack_14c = 0;
    local_158 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_b0,&local_158,DAT_141955260,0);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar2 == 0) {
      local_108 = 0x47d;
      uStack_14c = 0xd;
      local_158 = (longlong *)0x0;
      if (&local_158 != pplVar5) {
        local_148 = 0;
        uStack_144 = 0;
        uStack_140 = uStack_150;
        uStack_13c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar5);
        }
        FUN_140041b80(pplVar5,&local_148);
      }
    }
  }
  local_108 = 0x481;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_168,0,uVar4,0);
  local_108 = 0x482;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_168,0,uVar4,0);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  _eh_vector_destructor_iterator_(local_f0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

