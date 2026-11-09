// gml_Script___execute_function_on_complete_anon_21036___scribble_class_typist___scribble_class_typist @ 0x14016d9e0

undefined8 *
gml_Script___execute_function_on_complete_anon_21036___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  longlong **pplVar14;
  undefined8 uVar15;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  uint uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  byte local_fc;
  longlong local_f8;
  byte local_ec;
  longlong local_e8;
  byte local_dc;
  longlong local_d8;
  byte local_cc;
  longlong local_c8;
  byte local_bc;
  longlong local_b8;
  byte local_ac;
  longlong local_a8;
  byte local_9c;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_170 = "gml_Script___play_sound@anon@18756@__scribble_class_typist@__scribble_class_typist";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x256;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_114 = 0;
  local_120 = 0;
  local_124 = 0;
  local_130 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddd000) &&
     (_Init_thread_header(&DAT_141ddd000), DAT_141ddd000 == -1)) {
    DAT_141ddcfe0 = (longlong *)FUN_140e63aa0(DAT_141a07af8);
    _Init_thread_footer(&DAT_141ddd000);
  }
  if (DAT_141ddc08a == '\0') {
    FUN_140e64380(DAT_141ddcfe0,
                  "gml_Script___play_sound@anon@18756@__scribble_class_typist@__scribble_class_typist"
                 );
    FUN_140e64380(param_1,
                  "gml_Script___play_sound@anon@18756@__scribble_class_typist@__scribble_class_typist"
                 );
  }
  local_168 = 600;
  if (DAT_141ddc08a == '\0') {
    DAT_141ddc08a = '\x01';
    plVar5 = (longlong *)(**(code **)(*DAT_141ddcfe0 + 0x10))(DAT_141ddcfe0,DAT_1419fcb48);
    local_1d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1d0 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1d8);
    local_88 = &local_e8;
    FUN_140e609c0(DAT_141ddcfe0);
    pplVar14 = &local_88;
    plVar6 = (longlong *)
             gml_Script___scribble_texture_get_material(param_1,param_2,&local_1c8,1,pplVar14);
    uVar13 = (undefined4)((ulonglong)pplVar14 >> 0x20);
    if (plVar6 != plVar5) {
      local_1d8 = *plVar6;
      uStack_1d0 = plVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar5);
      }
      FUN_140041b80(plVar5,&local_1d8);
    }
    FUN_140e60910(1);
  }
  local_168 = 0x25a;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07a08);
  if (plVar5 != &local_188) {
    local_1d8 = *plVar5;
    uStack_1d0 = plVar5[1];
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1d8);
  }
  local_168 = 0x25b;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_98 = &local_188;
  uVar8 = CONCAT44(uVar13,DAT_1419fdb88);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar8,&local_98);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if ((((cVar2 == '\0') || (uStack_17c != 2)) || (local_188 == 0)) ||
     (*(int *)(local_188 + 0x24) < 1)) goto LAB_14016eab7;
  local_168 = 0x25d;
  uStack_1d0 = CONCAT44(0xd,(undefined4)uStack_1d0);
  local_1d8 = 0;
  local_1b8 = 0;
  uStack_1b0 = uStack_1d0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1b8);
  local_168 = 0x25e;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a079c8);
  cVar2 = FUN_140e491e0(uVar7);
  plVar5 = &DAT_1419df7b0;
  if (cVar2 == '\0') {
    local_168 = 0x272;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07ae8);
    FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_150);
    uVar4 = FUN_140e851f0(&local_150,uVar7,DAT_141955260,1);
    if (uVar4 < 0x80000000) {
      local_168 = 0x274;
      local_1d8 = 0x3ff0000000000000;
      uVar13 = (undefined4)uStack_1d0;
      uStack_1d0 = CONCAT44(0xd,uVar13);
      local_1b8 = 0x3ff0000000000000;
      uStack_1b0 = CONCAT44(0xd,uVar13);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1b8);
    }
  }
  else {
    local_168 = 0x261;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07728);
    if (param_4 < 1) {
      plVar9 = &DAT_1419df7b0;
    }
    else {
      plVar9 = (longlong *)*param_5;
    }
    uStack_1b0 = plVar9[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_1b8 = *plVar9;
    }
    else {
      FUN_1400419b0(&local_1b8);
    }
    FUN_140162c50(&local_1b8,0xeb1c432d);
    local_1d8 = local_1b8;
    uStack_1d0 = uStack_1b0;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1d8);
    if ((1 << ((byte)(uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_98 = &local_108;
    if (plVar6 != &local_f8) {
      local_1d8 = *plVar6;
      uStack_1d0 = plVar6[1];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1d8);
    }
    local_90 = &local_f8;
    uVar8 = CONCAT44(uVar13,DAT_1419fe728);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar8,&local_90);
    uVar15 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),DAT_1419fe728);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar15,&local_98);
    uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
    iVar3 = FUN_140e851f0(uVar8,uVar7,DAT_141955260,1);
    if (0 < iVar3) {
      local_168 = 0x263;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07b78);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 == '\0') {
        local_168 = 0x265;
        local_1d8 = 0x3ff0000000000000;
        uVar1 = (undefined4)uStack_1d0;
        uStack_1d0 = CONCAT44(0xd,uVar1);
        local_1b8 = 0x3ff0000000000000;
        uStack_1b0 = CONCAT44(0xd,uVar1);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_1b8);
      }
      else {
        local_168 = 0x267;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07ab8);
        if (plVar6 != &local_108) {
          local_1d8 = *plVar6;
          uStack_1d0 = plVar6[1];
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_1d8);
        }
        if (param_4 < 2) {
          plVar6 = &DAT_1419df7b0;
LAB_14016e061:
          local_1d8 = *plVar6;
          uStack_1d0 = plVar6[1];
          local_98 = &local_108;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_1d8);
        }
        else {
          plVar6 = (longlong *)param_5[1];
          local_98 = &local_108;
          if (plVar6 != &local_f8) goto LAB_14016e061;
        }
        local_90 = &local_f8;
        uVar8 = CONCAT44(uVar13,DAT_1419fcba8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar8,&local_98);
        uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 == '\0') {
          local_168 = 0x269;
          local_1d8 = 0x3ff0000000000000;
          uVar1 = (undefined4)uStack_1d0;
          uStack_1d0 = CONCAT44(0xd,uVar1);
          local_1b8 = 0x3ff0000000000000;
          uStack_1b0 = CONCAT44(0xd,uVar1);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1b8);
        }
      }
      local_168 = 0x26c;
      cVar2 = FUN_140e491e0(&local_1a8);
      if (cVar2 != '\0') {
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07b58);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 != '\0') {
          local_168 = 0x26e;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          local_1c8 = 0;
          local_1c0 = 0;
          local_1bc = 5;
          plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07798);
          if (plVar6 != &local_108) {
            local_1d8 = *plVar6;
            uStack_1d0 = plVar6[1];
            if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            FUN_140041b80(&local_108,&local_1d8);
          }
          local_98 = &local_108;
          FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar13,DAT_141a07788),&local_98);
        }
      }
    }
  }
  local_168 = 0x277;
  cVar2 = FUN_140e491e0(&local_1a8);
  if (cVar2 == '\0') goto LAB_14016eab7;
  local_168 = 0x279;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07728);
  FUN_140e609c0(param_1);
  if (0 < param_4) {
    plVar5 = (longlong *)*param_5;
  }
  if (plVar5 != plVar6) {
    local_1d8 = *plVar5;
    uStack_1d0 = plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar6);
    }
    FUN_140041b80(plVar6,&local_1d8);
  }
  FUN_140e60910(1);
  local_168 = 0x27b;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uVar13 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_120 = 0;
  local_118 = 0;
  local_114 = 5;
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
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07a58);
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07a38);
  plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a076a8);
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07798);
  if ((uStack_17c == 2) && (local_188 != 0)) {
    uVar13 = *(undefined4 *)(local_188 + 0x24);
  }
  plVar11 = (longlong *)gml_Script___scribble_asset_is_krutidev(param_1,param_2,&local_120,0,0);
  uStack_1b0 = plVar11[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar11 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1b8 = *plVar11;
  }
  else {
    FUN_1400419b0(&local_1b8,plVar11);
  }
  uStack_1d0._4_4_ = 7;
  local_1d8 = CONCAT44(local_1d8._4_4_,uVar13);
  FUN_140042560(&local_1b8,&local_1d8);
  if ((1 << ((byte)uStack_1d0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = local_1b8;
  uStack_1d0 = uStack_1b0;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1d8);
  if ((1 << ((byte)(uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_98 = &local_108;
  if (plVar6 != &local_f8) {
    local_1d8 = *plVar6;
    uStack_1d0 = plVar6[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1d8);
  }
  local_90 = &local_f8;
  if (plVar9 != &local_e8) {
    local_1d8 = *plVar9;
    uStack_1d0 = plVar9[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1d8);
  }
  local_88 = &local_e8;
  uVar13 = 0;
  plVar6 = (longlong *)gml_Script___scribble_asset_is_krutidev(param_1,param_2,&local_140,0,0);
  if (plVar6 != &local_d8) {
    local_1d8 = *plVar6;
    uStack_1d0 = plVar6[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1d8);
  }
  local_80 = &local_d8;
  uVar8 = CONCAT44(uVar13,DAT_1419fe728);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar8,&local_98);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  iVar3 = FUN_140e4a740(uVar7);
  plVar6 = (longlong *)0x0;
  if (((uStack_17c & 0xffffff) == 2) && (local_188 != 0)) {
    if ((iVar3 < 0) || (*(int *)(local_188 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(local_188 + 0x24));
    }
    else {
      plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_188 + 8));
    }
    if (plVar6 != &local_c8) goto LAB_14016e6a5;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar6 = &local_188;
LAB_14016e6a5:
    local_1d8 = *plVar6;
    uStack_1d0 = plVar6[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1d8);
  }
  local_78 = &local_c8;
  if (plVar5 != &local_b8) {
    local_1d8 = *plVar5;
    uStack_1d0 = plVar5[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1d8);
  }
  local_70 = &local_b8;
  plVar5 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_130,3,CONCAT44(uVar13,DAT_141a00c58),&local_90);
  if (plVar5 != &local_a8) {
    local_1d8 = *plVar5;
    uStack_1d0 = plVar5[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_1d8);
  }
  local_68 = &local_a8;
  FUN_140e609c0(param_1);
  pplVar14 = &local_78;
  plVar5 = (longlong *)
           gml_Script___scribble_sprite_get_material(param_1,param_2,&local_1c8,3,pplVar14);
  uVar13 = (undefined4)((ulonglong)pplVar14 >> 0x20);
  if (plVar5 != plVar10) {
    local_1d8 = *plVar5;
    uStack_1d0 = plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar10);
    }
    FUN_140041b80(plVar10,&local_1d8);
  }
  FUN_140e60910(1);
  local_168 = 0x27c;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07798);
  uStack_1d0 = uStack_1d0 & 0xffffffff;
  local_1d8 = 0;
  uVar4 = FUN_140e851f0(uVar7,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)(uStack_1d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (uVar4 < 0x80000000) {
    local_168 = 0x27e;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07798);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07968);
    puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07ae8);
    FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_150);
    if (plVar5 != &local_108) {
      local_1d8 = *plVar5;
      uStack_1d0 = plVar5[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1d8);
    }
    local_98 = &local_108;
    FUN_140e609c0(param_1);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar13,DAT_141a07948),&local_98);
    uStack_1d0 = uStack_1d0 & 0xffffffff;
    local_1d8 = 0x408f400000000000;
    FUN_140042560(&local_1d8,uVar8);
    local_154 = local_144;
    local_158 = local_148;
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
      local_160 = local_150;
    }
    else {
      FUN_1400419b0(&local_160,&local_150);
    }
    FUN_1400460e0(&local_160,&local_1d8);
    uStack_1b0 = CONCAT44(local_154,local_158);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_160;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_160);
    }
    FUN_1400462a0(&local_1b8,uVar7);
    if (&local_1b8 != puVar12) {
      local_58 = (undefined4)local_1b8;
      uStack_54 = local_1b8._4_4_;
      uStack_50 = (undefined4)uStack_1b0;
      uStack_4c = uStack_1b0._4_4_;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_58);
    }
    if ((1 << ((byte)(uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    if ((1 << ((byte)(uStack_1d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140e60910(1);
  }
LAB_14016eab7:
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

