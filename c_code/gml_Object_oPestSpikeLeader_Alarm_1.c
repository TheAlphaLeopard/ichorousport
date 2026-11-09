// gml_Object_oPestSpikeLeader_Alarm_1 @ 0x140be0050

void gml_Object_oPestSpikeLeader_Alarm_1(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  undefined1 **ppuVar10;
  ulonglong in_stack_fffffffffffffe40;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_160 = "gml_Object_oPestSpike_Step_0";
  local_158 = 0;
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_158 = 4;
  uStack_1ac = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_e8,uVar9,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1ac = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_f8,uVar9,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = local_e8;
  uStack_1b0 = uStack_e0;
  uStack_1ac = uStack_dc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1b8);
  local_68 = local_c8;
  local_1b8 = local_f8;
  uStack_1b0 = uStack_f0;
  uStack_1ac = uStack_ec;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1b8);
  local_60 = local_b8;
  uStack_1ac = 0xf;
  local_1b8 = (longlong *)0x1000000000000ee;
  local_178 = 0xee;
  uStack_174 = 0x1000000;
  uStack_170 = uStack_1b0;
  uStack_16c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_178);
  local_58 = local_a8;
  ppuVar12 = &local_68;
  ppuVar10 = (undefined1 **)CONCAT44(uVar11,DAT_141a12628);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,3,ppuVar10,ppuVar12);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    uStack_1ac = 6;
    ppuVar12 = (undefined1 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
    ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_141a0a7e8,0,&local_108,ppuVar10,ppuVar12);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = 0;
    local_1b8 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_108,&local_1b8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (iVar2 == 0) {
      local_158 = 6;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uStack_1ac = 0xf;
      local_1b8 = (longlong *)0x100000000000025;
      uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_1b8,DAT_141a0a7d8,0x80000000,&local_118,uVar9,uVar13);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uStack_1ac = 6;
      ppuVar12 = (undefined1 **)(uVar13 & 0xffffffffffffff00);
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_141a0a828,0x80000000,&local_128,uVar9 & 0xffffffffffffff00,
                    ppuVar12);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uStack_1ac = 0xf;
      local_1b8 = (longlong *)0x1000000000000ee;
      local_178 = 0xee;
      uStack_174 = 0x1000000;
      uStack_170 = uStack_1b0;
      uStack_16c = 0xf;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_178);
      local_50 = local_98;
      local_178 = (undefined4)local_118;
      uStack_174 = local_118._4_4_;
      uStack_170 = uStack_110;
      uStack_16c = uStack_10c;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_178);
      local_48 = local_88;
      local_178 = (undefined4)local_128;
      uStack_174 = local_128._4_4_;
      uStack_170 = uStack_120;
      uStack_16c = uStack_11c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_178);
      local_40 = local_78;
      ppuVar10 = &local_50;
      gml_Script_draw_line_sprite(param_1,param_2,&local_198,3,ppuVar10);
      local_158 = 7;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_17c = 0;
      local_188 = 0x4034000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_188);
    }
  }
  local_158 = 0xb;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe308);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_158 = 0xd;
    pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    uStack_1ac = 6;
    uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_140,uVar9,uVar13);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = 6;
    uVar13 = uVar13 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_141a0a778,0x80000000,&local_1a8,uVar9,uVar13);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    dVar6 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_1a8);
    }
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar7 = *pdVar4;
    }
    else {
      dVar7 = (double)FUN_140e4b060(pdVar4);
    }
    fVar5 = (float)FUN_140e78f90((float)dVar7,(float)dVar6);
    FUN_140162c50(&local_140,(double)fVar5);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_140);
    local_158 = 0xe;
    uStack_1ac = 6;
    uVar13 = uVar13 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_150,uVar9,uVar13);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = 6;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_141a0a778,0x80000000,&local_1a8,uVar9 & 0xffffffffffffff00,
                  uVar13 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    dVar6 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar6 = (double)FUN_140e4b060(&local_1a8);
    }
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar7 = *pdVar4;
    }
    else {
      dVar7 = (double)FUN_140e4b060(pdVar4);
    }
    fVar5 = (float)FUN_140e79010((float)dVar7,(float)dVar6);
    FUN_140162c50(&local_150,(double)fVar5);
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_150);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return;
}

