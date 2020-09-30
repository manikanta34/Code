select osi.sch_key, osi.orc_key, osi.mil_key,
to_char(osi.osi_assigned_date,'dd-mon-rrrr hh24:mi:ss') ,to_char(OSI.OSI_UPDATE,'dd-mon-rrrr hh24:mi:ss')
,osi.rsc_key, sch.sch_status, sch.sch_data, mil.mil_name, SCH.sch_update,to_char(sysdate,'dd-mon-rrrr hh24:mi:ss')
from osi, sch, mil
where osi.sch_key = sch.sch_key
and osi.mil_key = mil.mil_key
and osi.orc_key in (ENTER THE ORC KEY HERE)
order by sch.sch_update desc;
