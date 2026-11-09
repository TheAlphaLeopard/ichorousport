// gml_Script_anon_3964_gml_Object_oParticleManager_Create_0 @ 0x140bc3920

undefined8 *
gml_Script_anon_3964_gml_Object_oParticleManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  byte local_c4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 *local_70 [7];
  
  local_120 = "gml_Script_anon@123@gml_Object_oParticleManager_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 9;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_d0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f6e58);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f6ef8);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f6e98);
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2b0c) &&
     (_Init_thread_header(&DAT_141de2b0c), DAT_141de2b0c == -1)) {
    DAT_141de2af8 = (longlong *)FUN_140e63aa0(DAT_1419f6e78);
    _Init_thread_footer(&DAT_141de2b0c);
  }
  if (DAT_141ddc1ac == '\0') {
    FUN_140e64380(DAT_141de2af8,"gml_Script_anon@123@gml_Object_oParticleManager_Create_0");
    FUN_140e64380(param_1,"gml_Script_anon@123@gml_Object_oParticleManager_Create_0");
  }
  FUN_140e643a0(param_1,DAT_141de2af8);
  local_118 = 0x42;
  if (DAT_141ddc1ac == '\0') {
    DAT_141ddc1ac = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_141a0a9f8);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,gml_Script_size_anon_1026_anon_123_gml_Object_oParticleManager_Create_0
                  ,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_1419f5d48);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,
                  gml_Script_speed_anon_1227_anon_123_gml_Object_oParticleManager_Create_0,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_141a08788);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,
                  gml_Script_direction_anon_1435_anon_123_gml_Object_oParticleManager_Create_0,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    FUN_140e645a0(&local_158,gml_Script_grav_anon_1629_anon_123_gml_Object_oParticleManager_Create_0
                  ,0);
    local_148 = (undefined4)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_148);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e86fa0(DAT_141de2af8,DAT_1419f57f8,0x80000000,&local_80);
    FUN_140e645a0(&local_158,
                  gml_Script_rotation_anon_1870_anon_123_gml_Object_oParticleManager_Create_0,0);
    local_148 = (undefined4)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_148);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e86fa0(DAT_141de2af8,DAT_1419f5dc8,0x80000000,&local_90);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_1419f61a8);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,
                  gml_Script_ignore_time_anon_2020_anon_123_gml_Object_oParticleManager_Create_0,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_1419f5bd8);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,
                  gml_Script_set_color_anon_2154_anon_123_gml_Object_oParticleManager_Create_0,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_1419ff1b8);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,
                  gml_Script_palette_anon_2311_anon_123_gml_Object_oParticleManager_Create_0,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_1419f5d18);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,gml_Script_step_anon_2450_anon_123_gml_Object_oParticleManager_Create_0
                  ,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_1419f4f28);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,gml_Script_draw_anon_3340_anon_123_gml_Object_oParticleManager_Create_0
                  ,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_141a0a968);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,
                  gml_Script____struct___603_anon_123_gml_Object_oParticleManager_Create_0,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141de2af8 + 0x10))(DAT_141de2af8,DAT_141a05028);
    FUN_140e609c0(DAT_141de2af8);
    FUN_140e645a0(&local_158,
                  gml_Script____struct___604_anon_123_gml_Object_oParticleManager_Create_0,0);
    if (&local_158 != puVar4) {
      local_148 = (undefined4)local_158;
      uStack_144 = local_158._4_4_;
      uStack_140 = uStack_150;
      uStack_13c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e60910(1);
  }
  local_118 = 0xb;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 == &local_e0) goto LAB_140bc4207;
  }
  local_148 = *(undefined4 *)puVar5;
  uStack_144 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_140 = *(undefined4 *)(puVar5 + 1);
  uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_148);
LAB_140bc4207:
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_e0);
  local_118 = 0xc;
  if ((param_4 < 2) || (puVar4 = (undefined8 *)param_5[1], puVar4 != &local_f0)) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_f0);
  local_118 = 0xe;
  uStack_14c = 0xf;
  local_158 = 0x100000100000058;
  local_148 = 0x58;
  uStack_144 = 0x1000001;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  FUN_140041b80(&local_a0,&local_148);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_a0);
  local_118 = 0xf;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_f4 = 0;
  local_100 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_100);
  local_118 = 0x10;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  local_104 = 0;
  local_110 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_110);
  local_118 = 0x12;
  local_158 = 0x3ff0000000000000;
  uStack_14c = 0xd;
  local_148 = 0;
  uStack_144 = 0x3ff00000;
  uStack_140 = uStack_150;
  uStack_13c = 0xd;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_148);
  FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_b0);
  local_118 = 0x14;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_118 = 0x15;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6f58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_118 = 0x17;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_158,gml_Script____struct___605_anon_123_gml_Object_oParticleManager_Create_0,
                0);
  if (&local_158 != puVar1) {
    local_148 = (undefined4)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_d0) {
    local_148 = *(undefined4 *)puVar1;
    uStack_144 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_140 = *(undefined4 *)(puVar1 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_70[0] = &local_d0;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar8,local_70);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar7 != puVar6) {
    local_148 = *puVar7;
    uStack_144 = puVar7[1];
    uStack_140 = puVar7[2];
    uStack_13c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_148);
  }
  FUN_140e60910(1);
  local_118 = 0x20;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_158,gml_Script_anon_123_gml_Object_oParticleManager_Create_0,0);
  if (&local_158 != puVar2) {
    local_148 = (undefined4)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_148);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_d0) {
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_70[0] = &local_d0;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar8,local_70);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar7 != puVar6) {
    local_148 = *puVar7;
    uStack_144 = puVar7[1];
    uStack_140 = puVar7[2];
    uStack_13c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_148);
  }
  FUN_140e60910(1);
  local_118 = 0x29;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_118 = 0x2a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_118 = 0x2b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f310);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_118 = 0x2d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6f38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_118 = 0x2f;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05568);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_158,gml_Script_anon_3624_gml_Object_oParticleManager_Create_0,0);
  if (&local_158 != puVar3) {
    local_148 = (undefined4)local_158;
    uStack_144 = local_158._4_4_;
    uStack_140 = uStack_150;
    uStack_13c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_148);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_d0) {
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_70[0] = &local_d0;
  FUN_140e609c0(param_1);
  puVar7 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar9,DAT_1419fd6d8),local_70);
  if (puVar7 != puVar6) {
    local_148 = *puVar7;
    uStack_144 = puVar7[1];
    uStack_140 = puVar7[2];
    uStack_13c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_148);
  }
  FUN_140e60910(1);
  local_118 = 0x38;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5b78);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x416fffffe0000000;
  local_118 = 0x39;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57840);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_118 = 0x3b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a578b0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_118 = 0x3c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57820);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_118 = 0x3e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6f88);
  uStack_14c = 0xd;
  local_158 = 0;
  if (&local_158 != puVar1) {
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = uStack_150;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  local_118 = 0x3f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6f08);
  uStack_14c = 0xd;
  local_158 = 0;
  if (&local_158 != puVar1) {
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = uStack_150;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(&local_d0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

