// gml_Object_oTutorial_Create_0 @ 0x140df2b60

void gml_Object_oTutorial_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined4 uVar9;
  float fVar10;
  longlong *plVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  code *pcVar15;
  undefined1 **ppuVar16;
  ulonglong in_stack_fffffffffffffe40;
  ulonglong uVar17;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  longlong *local_160;
  undefined4 local_158;
  uint local_154;
  longlong *local_150;
  undefined4 local_148;
  uint local_144;
  longlong *local_140;
  undefined4 local_138;
  uint local_134;
  undefined8 local_130;
  undefined4 local_124;
  double local_120;
  uint local_114;
  double local_110;
  uint local_104;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  longlong **local_70;
  undefined1 *local_68;
  
  local_170 = "gml_Object_oTumorTera_Step_0";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  bVar8 = 0xff;
  local_17c = 0xffffff;
  local_188 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = (longlong *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_144 = 0xffffff;
  local_150 = (longlong *)0x0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_154 = 0xffffff;
  local_160 = (longlong *)0x0;
  local_114 = 0xffffff;
  local_120 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = (undefined1 *)0x0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_18c = 0xffffff;
  local_198 = 0;
  local_168 = 3;
  FUN_140e98b30(param_1,param_2);
  local_168 = 5;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_168 = 7;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_188 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_188);
    local_168 = 8;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    local_124 = 0;
    local_130 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_130);
    local_168 = 10;
  }
  else {
    local_168 = 0xe;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    local_134 = 0;
    local_140 = (longlong *)0x3ff4000000000000;
    local_168 = 0x10;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02698);
    uStack_19c = 6;
    in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_141a0f7f8,0x80000000,&local_d8,
                  (ulonglong)pcVar15 & 0xffffffffffffff00,in_stack_fffffffffffffe40);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1b8 = local_d8;
    uStack_1b0 = uStack_d0;
    uStack_1ac = uStack_cc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1b8);
    local_78 = local_a8;
    local_70 = &local_140;
    uStack_19c = local_134;
    uStack_1a0 = local_138;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_140;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_140);
    }
    uStack_1ac = 7;
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,1);
    FUN_1400462a0(&local_1a8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_f4 = 0;
    local_100 = (longlong *)0x3ff0000000000000;
    FUN_140046500(&local_100,uVar3);
    uStack_dc = local_f4;
    uStack_e0 = local_f8;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
      local_e8 = local_100;
    }
    else {
      FUN_1400419b0(&local_e8,&local_100);
    }
    FUN_140042560(&local_e8,&local_1a8);
    local_1b8 = local_e8;
    uStack_1b0 = uStack_e0;
    uStack_1ac = uStack_dc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1b8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_68 = local_88;
    ppuVar16 = &local_78;
    puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_198,3,ppuVar16);
    if (puVar5 != &local_188) {
      local_1b8 = (longlong *)*puVar5;
      uStack_1b0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1b8);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_188);
    local_168 = 0x12;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57e00);
    uVar2 = FUN_140e851f0(uVar6,uVar3,DAT_141955260,1);
    bVar8 = 0xff;
    if (uVar2 < 0x80000000) {
      local_168 = 0x14;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a02698);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_17c = 0;
      local_188 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_188);
      local_168 = 0x15;
      uStack_1ac = 6;
      in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
      uVar7 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_150,uVar7,in_stack_fffffffffffffe40);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uVar9 = FUN_140e794b0(0,0);
      uStack_19c = local_144;
      uStack_1a0 = local_148;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
        local_1a8 = local_150;
      }
      else {
        FUN_1400419b0(&local_1a8,&local_150);
      }
      FUN_140162c50(&local_1a8,uVar9);
      local_1b8 = local_1a8;
      uStack_1b0 = uStack_1a0;
      uStack_1ac = uStack_19c;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      FUN_140041b80(&local_110,&local_1b8);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_1ac = 6;
      in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_160,uVar7,in_stack_fffffffffffffe40);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uVar9 = FUN_140e794b0(0,0);
      uStack_19c = local_154;
      uStack_1a0 = local_158;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
        local_1a8 = local_160;
      }
      else {
        FUN_1400419b0(&local_1a8,&local_160);
      }
      FUN_140162c50(&local_1a8,uVar9);
      local_1b8 = local_1a8;
      uStack_1b0 = uStack_1a0;
      uStack_1ac = uStack_19c;
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      FUN_140041b80(&local_120,&local_1b8);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_168 = 0x17;
      uStack_1ac = 6;
      in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_150,uVar7,in_stack_fffffffffffffe40);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uStack_1ac = 6;
      local_1b8 = param_1;
      FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_160,uVar7 & 0xffffffffffffff00,
                    in_stack_fffffffffffffe40 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      plVar11 = local_160;
      if ((local_154 & 0xffffff) != 0) {
        plVar11 = (longlong *)FUN_140e4b060(&local_160);
      }
      plVar12 = local_150;
      if ((local_144 & 0xffffff) != 0) {
        plVar12 = (longlong *)FUN_140e4b060(&local_150);
      }
      dVar13 = local_120;
      if ((local_114 & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_120);
      }
      dVar14 = local_110;
      if ((local_104 & 0xffffff) != 0) {
        dVar14 = (double)FUN_140e4b060(&local_110);
      }
      fVar10 = (float)FUN_140e793d0((float)dVar14,(float)dVar13,(float)(double)plVar12,
                                    (float)(double)plVar11);
      bVar8 = 0;
      local_ac = 0;
      local_b8 = (double)(fVar10 + 180.0);
      local_168 = 0x18;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02a98);
      uVar17 = 0;
      FUN_140e63610(param_1,param_2,&local_198,0,uVar7,0);
      local_168 = 0x19;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0c08);
      FUN_140e87440(uVar3,DAT_1419f4a98,0x80000000,&local_c8,uVar7 & 0xffffffffffffff00,
                    uVar17 & 0xffffffffffffff00);
      uVar3 = FUN_140069500(uVar3);
      in_stack_fffffffffffffe40 = 0;
      ppuVar16 = &local_c8;
      FUN_140e63610(uVar3,param_2,&local_198,0,ppuVar16,0);
      local_168 = 0x1b;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57e00);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
    }
    local_168 = 0x1f;
    uStack_1ac = 6;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_141a0f7f8,0x80000000,&local_d8,
                  (ulonglong)ppuVar16 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = local_d8;
    uStack_1b0 = uStack_d0;
    uStack_1ac = uStack_cc;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_1b8);
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_130);
    local_168 = 0x21;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a57e00);
    FUN_140e609c0(param_1);
    FUN_1400460e0(uVar3,uVar4);
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

