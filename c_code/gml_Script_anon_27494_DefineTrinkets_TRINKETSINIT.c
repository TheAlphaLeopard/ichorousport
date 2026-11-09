// gml_Script_anon_27494_DefineTrinkets_TRINKETSINIT @ 0x1406042e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_27494_DefineTrinkets_TRINKETSINIT
          (code *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined4 local_140 [4];
  undefined4 local_130 [6];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_100 = "gml_Script_anon@26715@DefineTrinkets@TRINKETSINIT";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x3f4;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_140,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_154 = 0;
  local_160 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x3f5;
  local_144 = 0xf;
  local_150 = 0x1000000000000f5;
  iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_150);
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if (0 < iVar2) {
    do {
      uVar8 = (undefined4)((ulonglong)pcVar7 >> 0x20);
      local_f8 = 0x3f6;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      local_160 = 0;
      local_158 = 0;
      local_154 = 5;
      puVar3 = (undefined4 *)(**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_141a1f0d0);
      if (puVar3 != local_130) {
        local_118 = *puVar3;
        uStack_114 = puVar3[1];
        uStack_110 = puVar3[2];
        uStack_10c = puVar3[3];
        if ((1 << ((byte)local_130[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_130);
        }
        FUN_140041b80(local_130,&local_118);
      }
      local_d0 = local_130;
      pcVar7 = (code *)CONCAT44(uVar8,DAT_141a02ef8);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_160,1,pcVar7,&local_d0);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_f8 = 0x3f6;
      }
      else {
        local_f8 = 0x3f7;
        uVar4 = (**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_141a1f0d0);
        pcVar7 = local_res8;
        FUN_140e87170(uVar4,DAT_141a1f580,0x80000000,&local_b8,local_res8,local_res10);
        local_9c = 0xf;
        local_a8 = 0x1000000000000ee;
        iVar2 = FUN_140e851f0(&local_b8,&local_a8,DAT_141955260,0);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        uVar8 = (undefined4)((ulonglong)pcVar7 >> 0x20);
        if (iVar2 == 0) {
          local_f8 = 0x3f8;
          if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_160);
          }
          local_160 = 0;
          local_158 = 0;
          local_154 = 5;
          puVar3 = (undefined4 *)
                   (**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_1419fe9b8);
          if (puVar3 != local_140) {
            local_118 = *puVar3;
            uStack_114 = puVar3[1];
            uStack_110 = puVar3[2];
            uStack_10c = puVar3[3];
            if ((1 << ((byte)local_140[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_140);
            }
            FUN_140041b80(local_140,&local_118);
          }
          local_d8 = local_140;
          local_118 = _DAT_1419e6a60;
          uStack_114 = uRam00000001419e6a64;
          uStack_110 = uRam00000001419e6a68;
          uStack_10c = uRam00000001419e6a6c;
          if ((1 << ((byte)local_130[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_130);
          }
          FUN_140041b80(local_130,&local_118);
          local_d0 = local_130;
          pcVar7 = (code *)CONCAT44(uVar8,DAT_141a01af8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_160,2,pcVar7,&local_d8);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            local_f8 = 0x3f8;
          }
          else {
            local_f8 = 0x3f9;
            puVar5 = (undefined8 *)
                     (**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_1419f59c8);
            local_8c = 0;
            local_98 = 0;
            iVar2 = FUN_140e851f0(puVar5,&local_98,DAT_141955260,1);
            if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_98);
            }
            uVar8 = (undefined4)((ulonglong)pcVar7 >> 0x20);
            if (iVar2 == -2 || 0 < iVar2) {
              local_f8 = 0x3fa;
              if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_160);
              }
              local_160 = 0;
              local_158 = 0;
              local_154 = 5;
              puVar6 = (undefined8 *)
                       (**(code **)(*(longlong *)local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
              if (puVar3 != local_140) {
                local_118 = *puVar3;
                uStack_114 = puVar3[1];
                uStack_110 = puVar3[2];
                uStack_10c = puVar3[3];
                if ((1 << ((byte)local_140[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_140);
                }
                FUN_140041b80(local_140,&local_118);
              }
              local_d8 = local_140;
              FUN_140e609c0(local_res8);
              pcVar7 = (code *)CONCAT44(uVar8,DAT_1419f5e98);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_160,1,pcVar7,&local_d8);
              local_144 = 0;
              local_150 = 0x3fb999999999999a;
              FUN_140042560(&local_150,uVar4);
              local_bc = 0;
              local_c8 = 0x3ff0000000000000;
              FUN_1400460e0(&local_c8,&local_150);
              uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
              uStack_e0 = *(undefined4 *)(puVar5 + 1);
              if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
                local_e8 = *puVar5;
              }
              else {
                FUN_1400419b0(&local_e8,puVar5);
              }
              FUN_140042560(&local_e8,&local_c8);
              if (&local_e8 != puVar6) {
                local_118 = (undefined4)local_e8;
                uStack_114 = local_e8._4_4_;
                uStack_110 = uStack_e0;
                uStack_10c = uStack_dc;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar6);
                }
                FUN_140041b80(puVar6,&local_118);
              }
              if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e8);
              }
              if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_c8);
              }
              if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_150);
              }
              FUN_140e60910(1);
            }
            else {
              local_f8 = 0x3f9;
            }
          }
        }
        else {
          local_f8 = 0x3f7;
        }
      }
      cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_140,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

