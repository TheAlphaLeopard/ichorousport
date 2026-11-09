// gml_GlobalScript_particle_create @ 0x14040a2e0

undefined8 *
gml_GlobalScript_particle_create(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  
  local_60 = "gml_Script_anon@46573@DefineDebuffs@OFFERINGSINIT";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x773;
  local_8c = 0xf;
  local_98 = 0x10000000000009d;
  local_res8 = param_1;
  local_res10 = param_2;
  iVar2 = FUN_140e63cb0(local_50,&local_res8,&local_res10,&local_98);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (0 < iVar2) {
    do {
      local_58 = 0x775;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_8c = 10;
      local_98 = 0;
      iVar2 = FUN_140e851f0(uVar3,&local_98,DAT_141955260,0);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if (iVar2 == 0) {
        local_58 = 0x776;
        local_88 = 0;
        uStack_84 = 0x3ff00000;
        uStack_7c = 0xd;
        local_78 = 0;
        uStack_74 = 0x3ff00000;
        uStack_70 = uStack_80;
        uStack_6c = 0xd;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_78);
        FUN_140e86fa0(local_res8,DAT_1419f61d8,0x80000000);
      }
      else {
        local_58 = 0x775;
      }
      cVar1 = FUN_140e643f0(local_50,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_50,&local_res8,&local_res10);
  if (local_40 != 0) {
    FUN_140e4cd60();
    local_40 = 0;
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

